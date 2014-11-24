
require.config
(
    {
        baseUrl: "",
        paths:
        {
            angular: "libs/js/angular",
            angularAnimate: "libs/js/angular-animate",
            storeJson2: "libs/js/store_json2",
            angularUIRoute: "libs/js/angular-ui-router",
            angularSanitize: "libs/js/angular-sanitize",
            angularCookies: "libs/js/angular-cookies",
            angularResource: "libs/js/angular-resource",
            angularUtils: 'libs/js/ui-utils',
            domReady: 'libs/js/domReady',
            jQuery: 'libs/js/jquery-2.1.1',
            bootstrap: 'libs/js/bootstrap',
            bootstrapUi: 'libs/js/ui-bootstrap-tpls-0.11.0'
        },
        shim:
        {
            angular:
            {
                exports: "angular",
                deps: ["jQuery"]
            },
            angularUIRoute: { deps: ["angular"] },
            angularAnimate: { deps: ["angular"] },
            angularSanitize: { deps: ["angular"] },
            angularCookies: { deps: ["angular"] },
            angularResource: { deps: ["angular"] },
            angularUtils: { deps: ["angular"] },
            bootstrap:  { deps: ["jQuery"] },
            bootstrapUi: { deps: ["bootstrap", "angular"] }
        }
    }
);

require
(
    [
        //System includes
        "angular",
        "domReady",

        //Custom includes
        "pages/js/casd"
    ],

    function(angular, domReady, casd)
    {
        domReady
        (
            function()
            {
                angular.bootstrap(document, [casd.name]);
            }
        );
    }
);