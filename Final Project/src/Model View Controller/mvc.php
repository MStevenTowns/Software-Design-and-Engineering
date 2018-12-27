<?php

class Model {
	public $out;

	public function __construct() {
		$this->out = 'Hello World';
	}
}

class View {
	private $model;

	public function __construct(Model $model) {
		$this->model = $model;
	}

	public function output() {
		return $this->model->out;
	}
}

class Controller {
	private $model;

	public function __construct(Model $model) {
		$this->model = $model;
	}
}

$model = new Model();
$controller = new Controller($model);
$view = new View($model);

echo $view->output()

?>