<?php 
	require_once 'includes/security.php';
?><html data-ng-app="dashboard">
<head>
<title>Developer Dashboard</title>
<meta charset="utf-8">
<meta http-equiv="X-UA-Compatible" content="IE=edge">
<meta name="viewport" content="width=device-width, initial-scale=1">
<link href="css/bootstrap.min.css" rel="stylesheet">
<link href="css/dashboard.css" rel="stylesheet">
</head>

<body  ng-controller="Users">
	
	<nav class="navbar navbar-default navbar-fixed-top" role="navigation">
		<div class="container-fluid">
			<p class="navbar-brand">DevTool</p>
			<p class="navbar-text" >Hello, {{ user.firstname }}</p>

			<ul class="nav navbar-nav navbar-right">
				<li><a>Messages</a></li>
				<li><a>Profile</a></li>
				<li><a>Exit</a></li>
			</ul>

		</div>
	</nav>

	<div class="container-fluid">
		<div class="row">
			<div class="col-xs-3">
				<div class="row">

					<button type="button" class="btn btn-primary btn-lg btn-block">New
						Project</button>

				</div>

				<div class="row well div_myProjects">
					<ul class="list-group col-xs-12" role="group">
						<li class="list-group-item btn_project" data-ng-repeat="project in projects" data-ng-click="setProject(project.id)" ng-href="">
							{{project.name}}
						</li>

					</ul>
				</div>
			</div>

			<div class="col-xs-9">
				<div class="row">

					<nav class="navbar navbar-default">
						<div class="container">
							<p class="navbar-brand">{{project.name}}</p>
							<ul class="nav navbar-nav navbar_project_edit">
								<li><a class="navbar-link navbar_project_edit">(edit)</a></li>
							</ul>
							<p class="navbar-text navbar-project-info" style="">{{
								"01/01/2014" }} - {{ "02/01/2014" }}</p>

							<p class="navbar-text">{{ "80" }} % completado</p>

						</div>


					</nav>

				</div>
				<div class="row panel panel-default">
					<div class="panel-body">
						<div class="col-xs-5 noPadding">
							<form class="form-horizontal" role="form">
								<div class="form-group">
									<div class="col-xs-12">
										<button type="button" class="btn btn-info btn-block">Project
											Backlog</button>
									</div>
								</div>

								<div class="form-group">
									<div class="btn-group col-xs-12" role="group">
										<button type="button" class="btn btn-default col-xs-9">Current
											Sprintlog</button>
										<button type="button" class="btn btn-default col-xs-3">Previous</button>
									</div>
								</div>
								<div class="form-group">
									<div class="col-xs-12">
										<button type="button" class="btn btn-default btn-block">View
											Tasks</button>
									</div>
								</div>
								<div class="form-group">
									<div class="col-xs-12">
										<button type="button" class="btn btn-default btn-block">Project
										</button>
									</div>
								</div>
							</form>

							<div class="panel panel-default">
								<div class="panel-heading">Project description</div>
								<div class="panel-body">{{ project.description }}</div>
							</div>

						</div>

						<div class="col-xs-7">
							<div class="panel panel-default">
								<div class="panel-heading">Current Sprintlog Burndown</div>
								<div class="panel-body">
									<div id="div_chart" style="width:100%; height:300px; ">
									
									</div>
								
								</div>
							</div>

							<div class="panel panel-default">
								<div class="panel-heading">Developer Chart</div>
								<table class="table table-hover">
									<thead>
										<tr>
											<th class="col-xs-9">Name</th>
											<th style="text-align: right; margin-right:5px;">Points</th>
										</tr>
									</thead>
									<tbody>
										<tr data-ng-repeat="i in [1,2,3,4,5,6,7,8,9]" value="{{$index+1}}">
											<td>Developer {{ $index+1 }}</td>
											<td style="text-align: right; margin-right:5px;">{{ ($index+1)*30 }}</td>
										</tr>
									</tbody>
									

								</table>
							</div>

							<div class="panel panel-default">
								<div class="panel-heading">Current Events</div>
								<div class="panel-body"></div>
							</div>

						</div>

					</div>
				</div>

			</div>
		</div>

	</div>




	<script
		src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.1/jquery.min.js"></script>

	<script src="includes/graph/jquery.canvasjs.min.js"></script>	
	
	<script src="includes/bootstrap.min.js"></script>

	<script src="includes/angular.min.js"></script>

	<script src="includes/dashboard.js"></script>
</body>
</html>