/*
 * This file was aut-generated by tiliaeparser. Do not modify. Unless.
 * Include only once.
 * https://github.com/iwasz/tiliae
 */

#include <reflection/Reflection.h>
#include "/home/iwasz/workspace/gtkforms-demo/src/Reflection_input.cc"

namespace {
using namespace Core;
using namespace Reflection;

void createReflectionDatabase_gtkFormsDemo ()
{
	{
		Class *clazz = new Class ("Certificate", typeid (Certificate &), new Reflection::PtrDeleter <Certificate>);
		if (!Manager::add (clazz)) {
			delete clazz;
		}
		else {
			clazz->addConstructor (new Constructor (Reflection::ConstructorPointerWrapper2 <Certificate, void>::Level1Wrapper::newConstructorPointer ()));
			clazz->addField (new Field ("name", Reflection::createFieldWrapper (&Certificate::name)));
			clazz->addField (new Field ("icon", Reflection::createFieldWrapper (&Certificate::icon)));
			clazz->addField (new Field ("priceVisible", Reflection::createFieldWrapper (&Certificate::priceVisible)));
			clazz->addField (new Field ("availableVisible", Reflection::createFieldWrapper (&Certificate::availableVisible)));
		}
	}
	{
		Class *clazz = new Class ("CertificateVector", typeid (CertificateVector&), new PtrDeleter <CertificateVector >);
		if (!Manager::add (clazz)) {;
			delete clazz;
		}
		else { 
			IConstructorPointer *cp = Reflection::ConstructorPointerWrapper2 <CertificateVector, void>::Level1Wrapper::newConstructorPointer ();
			clazz->addConstructor (new Constructor (cp));

			ICallableWrapper *w = new AddWrapper <CertificateVector > ();
			clazz->addMethod (new Method ("add", w));

			w = new GetWrapper <CertificateVector > ();
			clazz->addMethod (new Method ("get", w));

			w = new SetWrapper <CertificateVector > ();
			clazz->addMethod (new Method ("set", w));

			w = new IteratorWrapper <CertificateVector > ();
			clazz->addMethod (new Method ("iterator", w));
		}
	}
	{
		Class *clazz = new Class ("Peripheral", typeid (Peripheral &), new Reflection::PtrDeleter <Peripheral>);
		if (!Manager::add (clazz)) {
			delete clazz;
		}
		else {
			clazz->addConstructor (new Constructor (Reflection::ConstructorPointerWrapper2 <Peripheral, void>::Level1Wrapper::newConstructorPointer ()));
			clazz->addField (new Field ("name", Reflection::createFieldWrapper (&Peripheral::name)));
			clazz->addField (new Field ("desc", Reflection::createFieldWrapper (&Peripheral::desc)));
			clazz->addField (new Field ("icon", Reflection::createFieldWrapper (&Peripheral::icon)));
			clazz->addField (new Field ("priceVisible", Reflection::createFieldWrapper (&Peripheral::priceVisible)));
			clazz->addField (new Field ("availableVisible", Reflection::createFieldWrapper (&Peripheral::availableVisible)));
			clazz->addField (new Field ("certificates", Reflection::createFieldWrapper (&Peripheral::certificates)));
			clazz->addField (new Field ("available", Reflection::createFieldWrapper (&Peripheral::available)));
		}
	}
	{
		Class *clazz = new Class ("PeripheralVector", typeid (PeripheralVector&), new PtrDeleter <PeripheralVector >);
		if (!Manager::add (clazz)) {;
			delete clazz;
		}
		else { 
			IConstructorPointer *cp = Reflection::ConstructorPointerWrapper2 <PeripheralVector, void>::Level1Wrapper::newConstructorPointer ();
			clazz->addConstructor (new Constructor (cp));

			ICallableWrapper *w = new AddWrapper <PeripheralVector > ();
			clazz->addMethod (new Method ("add", w));

			w = new GetWrapper <PeripheralVector > ();
			clazz->addMethod (new Method ("get", w));

			w = new SetWrapper <PeripheralVector > ();
			clazz->addMethod (new Method ("set", w));

			w = new IteratorWrapper <PeripheralVector > ();
			clazz->addMethod (new Method ("iterator", w));
		}
	}
	{
		Class *clazz = new Class ("Computer", typeid (Computer &), new Reflection::PtrDeleter <Computer>);
		if (!Manager::add (clazz)) {
			delete clazz;
		}
		else {
			clazz->addConstructor (new Constructor (Reflection::ConstructorPointerWrapper2 <Computer, void>::Level1Wrapper::newConstructorPointer ()));
			clazz->addField (new Field ("name", Reflection::createFieldWrapper (&Computer::name)));
			clazz->addField (new Field ("desc", Reflection::createFieldWrapper (&Computer::desc)));
			clazz->addField (new Field ("icon", Reflection::createFieldWrapper (&Computer::icon)));
			clazz->addField (new Field ("price", Reflection::createFieldWrapper (&Computer::price)));
			clazz->addField (new Field ("priceVisible", Reflection::createFieldWrapper (&Computer::priceVisible)));
			clazz->addField (new Field ("availableVisible", Reflection::createFieldWrapper (&Computer::availableVisible)));
			clazz->addField (new Field ("peripherals", Reflection::createFieldWrapper (&Computer::peripherals)));
			clazz->addField (new Field ("available", Reflection::createFieldWrapper (&Computer::available)));
		}
	}
	{
		Class *clazz = new Class ("ComputerVector", typeid (ComputerVector&), new PtrDeleter <ComputerVector >);
		if (!Manager::add (clazz)) {;
			delete clazz;
		}
		else { 
			IConstructorPointer *cp = Reflection::ConstructorPointerWrapper2 <ComputerVector, void>::Level1Wrapper::newConstructorPointer ();
			clazz->addConstructor (new Constructor (cp));

			ICallableWrapper *w = new AddWrapper <ComputerVector > ();
			clazz->addMethod (new Method ("add", w));

			w = new GetWrapper <ComputerVector > ();
			clazz->addMethod (new Method ("get", w));

			w = new SetWrapper <ComputerVector > ();
			clazz->addMethod (new Method ("set", w));

			w = new IteratorWrapper <ComputerVector > ();
			clazz->addMethod (new Method ("iterator", w));
		}
	}
	{
		Class *clazz = new Class ("AnimalVector", typeid (AnimalVector&), new PtrDeleter <AnimalVector >);
		if (!Manager::add (clazz)) {;
			delete clazz;
		}
		else { 
			IConstructorPointer *cp = Reflection::ConstructorPointerWrapper2 <AnimalVector, void>::Level1Wrapper::newConstructorPointer ();
			clazz->addConstructor (new Constructor (cp));

			ICallableWrapper *w = new AddWrapper <AnimalVector > ();
			clazz->addMethod (new Method ("add", w));

			w = new GetWrapper <AnimalVector > ();
			clazz->addMethod (new Method ("get", w));

			w = new SetWrapper <AnimalVector > ();
			clazz->addMethod (new Method ("set", w));

			w = new IteratorWrapper <AnimalVector > ();
			clazz->addMethod (new Method ("iterator", w));
		}
	}
	{
		Class *clazz = new Class ("Animal", typeid (Animal &), new Reflection::PtrDeleter <Animal>);
		if (!Manager::add (clazz)) {
			delete clazz;
		}
		else {
			clazz->addConstructor (new Constructor (Reflection::ConstructorPointerWrapper2 <Animal, void>::Level1Wrapper::newConstructorPointer ()));
			clazz->addField (new Field ("name", Reflection::createFieldWrapper (&Animal::name)));
			clazz->addField (new Field ("rating", Reflection::createFieldWrapper (&Animal::rating)));
			clazz->addField (new Field ("predator", Reflection::createFieldWrapper (&Animal::predator)));
			clazz->addField (new Field ("friends", Reflection::createFieldWrapper (&Animal::friends)));
		}
	}
	{
		Class *clazz = new Class ("UserVector", typeid (UserVector&), new PtrDeleter <UserVector >);
		if (!Manager::add (clazz)) {;
			delete clazz;
		}
		else { 
			IConstructorPointer *cp = Reflection::ConstructorPointerWrapper2 <UserVector, void>::Level1Wrapper::newConstructorPointer ();
			clazz->addConstructor (new Constructor (cp));

			ICallableWrapper *w = new AddWrapper <UserVector > ();
			clazz->addMethod (new Method ("add", w));

			w = new GetWrapper <UserVector > ();
			clazz->addMethod (new Method ("get", w));

			w = new SetWrapper <UserVector > ();
			clazz->addMethod (new Method ("set", w));

			w = new IteratorWrapper <UserVector > ();
			clazz->addMethod (new Method ("iterator", w));
		}
	}
	{
		Class *clazz = new Class ("User", typeid (User &), new Reflection::PtrDeleter <User>);
		if (!Manager::add (clazz)) {
			delete clazz;
		}
		else {
			clazz->addConstructor (new Constructor (Reflection::ConstructorPointerWrapper2 <User, void>::Level1Wrapper::newConstructorPointer ()));
			clazz->addField (new Field ("firstname", Reflection::createFieldWrapper (&User::firstname)));
			clazz->addField (new Field ("lastname", Reflection::createFieldWrapper (&User::lastname)));
			clazz->addField (new Field ("occupation", Reflection::createFieldWrapper (&User::occupation)));
			clazz->addField (new Field ("age", Reflection::createFieldWrapper (&User::age)));
			clazz->addField (new Field ("happy", Reflection::createFieldWrapper (&User::happy)));
			clazz->addField (new Field ("friends", Reflection::createFieldWrapper (&User::friends)));
			clazz->addMethod (new Method ("toString", createMethodWrapper (&User::toString)));
		}
	}
	{
		Class *clazz = new Class ("Object", typeid (Core::Object &), new Reflection::PtrDeleter <Core::Object>);
		if (!Manager::add (clazz)) {
			delete clazz;
		}
		else {
			clazz->addConstructor (new Constructor (Reflection::ConstructorPointerWrapper2 <Core::Object, void>::Level1Wrapper::newConstructorPointer ()));
			clazz->addConstructor (new Constructor (Reflection::ConstructorPointerWrapper2 <Core::Object, void>::Level1Wrapper::newConstructorPointer ()));
		}
	}
	{
		Class *clazz = new Class ("IEditor", typeid (Editor::IEditor &), new Reflection::PtrDeleter <Editor::IEditor>);
		if (!Manager::add (clazz)) {
			delete clazz;
		}
		else {
			clazz->addBaseClassName ("Object");
			clazz->addMethod (new Method ("convert", createMethodWrapper (&Editor::IEditor::convert)));
		}
	}
	{
		Class *clazz = new Class ("IFactory", typeid (Factory::IFactory &), new Reflection::PtrDeleter <Factory::IFactory>);
		if (!Manager::add (clazz)) {
			delete clazz;
		}
		else {
			clazz->addBaseClassName ("Object");
			clazz->addMethod (new Method ("create", createMethodWrapper (&Factory::IFactory::create)));
		}
	}
	{
		Class *clazz = new Class ("JEditor", typeid (Editor::JEditor &), new Reflection::PtrDeleter <Editor::JEditor>);
		if (!Manager::add (clazz)) {
			delete clazz;
		}
		else {
			clazz->addBaseClassName ("IEditor");
			clazz->addMethod (new Method ("convert", createMethodWrapper (&Editor::JEditor::convert)));
			clazz->addMethod (new Method ("edit", createMethodWrapper (&Editor::JEditor::edit)));
		}
	}
	{
		Class *clazz = new Class ("ListToStringEditor", typeid (Editor::ListToStringEditor &), new Reflection::PtrDeleter <Editor::ListToStringEditor>);
		if (!Manager::add (clazz)) {
			delete clazz;
		}
		else {
			clazz->addBaseClassName ("JEditor");
			clazz->addConstructor (new Constructor (Reflection::ConstructorPointerWrapper2 <Editor::ListToStringEditor, void>::Level1Wrapper::newConstructorPointer ()));
			clazz->addConstructor (new Constructor (Reflection::ConstructorPointerWrapper2 <Editor::ListToStringEditor, const std::string &, const std::string &>::Level1Wrapper::newConstructorPointer ()));
			clazz->addMethod (new Method ("edit", createMethodWrapper (&Editor::ListToStringEditor::edit)));
			clazz->addMethod (new Method ("getDelimiter", createMethodWrapper (&Editor::ListToStringEditor::getDelimiter)));
			clazz->addMethod (new Method ("setDelimiter", createMethodWrapper (&Editor::ListToStringEditor::setDelimiter)));
			clazz->addMethod (new Method ("getQuotation", createMethodWrapper (&Editor::ListToStringEditor::getQuotation)));
			clazz->addMethod (new Method ("setQuotation", createMethodWrapper (&Editor::ListToStringEditor::setQuotation)));
		}
	}
	{
		Class *clazz = new Class ("ChainFactory", typeid (Factory::ChainFactory &), new Reflection::PtrDeleter <Factory::ChainFactory>);
		if (!Manager::add (clazz)) {
			delete clazz;
		}
		else {
			clazz->addBaseClassName ("IFactory");
			clazz->addConstructor (new Constructor (Reflection::ConstructorPointerWrapper2 <Factory::ChainFactory, void>::Level1Wrapper::newConstructorPointer ()));
			clazz->addConstructor (new Constructor (Reflection::ConstructorPointerWrapper2 <Factory::ChainFactory, _Bool>::Level1Wrapper::newConstructorPointer ()));
			clazz->addMethod (new Method ("create", createMethodWrapper (&Factory::ChainFactory::create)));
			clazz->addMethod (new Method ("setFactories", createMethodWrapper (&Factory::ChainFactory::setFactories)));
			clazz->addMethod (new Method ("addFactory", createMethodWrapper (&Factory::ChainFactory::addFactory)));
			clazz->addMethod (new Method ("getFactories", createMethodWrapper (&Factory::ChainFactory::getFactories)));
		}
	}
	{
		Class *clazz = new Class ("K202", typeid (k202::K202 &), new Reflection::PtrDeleter <k202::K202>);
		if (!Manager::add (clazz)) {
			delete clazz;
		}
		else {
			clazz->addMethod (new Method ("setBeanWrapper", createMethodWrapper (&k202::K202::setBeanWrapper)));
		}
	}
	{
		Class *clazz = new Class ("Sender", typeid (Signal::Sender &), new Reflection::PtrDeleter <Signal::Sender>);
		if (!Manager::add (clazz)) {
			delete clazz;
		}
		else {
			clazz->addConstructor (new Constructor (Reflection::ConstructorPointerWrapper2 <Signal::Sender, void>::Level1Wrapper::newConstructorPointer ()));
			clazz->addConstructor (new Constructor (Reflection::ConstructorPointerWrapper2 <Signal::Sender, void *>::Level1Wrapper::newConstructorPointer ()));
			clazz->addConstructor (new Constructor (Reflection::ConstructorPointerWrapper2 <Signal::Sender, void *, const std::string &>::Level1Wrapper::newConstructorPointer ()));
			clazz->addConstructor (new Constructor (Reflection::ConstructorPointerWrapper2 <Signal::Sender, const std::string &>::Level1Wrapper::newConstructorPointer ()));
			clazz->addMethod (new Method ("getOwnerObject", createMethodWrapper (&Signal::Sender::getOwnerObject)));
			clazz->addMethod (new Method ("setOwnerObject", createMethodWrapper (&Signal::Sender::setOwnerObject)));
			clazz->addMethod (new Method ("getScope", createMethodWrapper (&Signal::Sender::getScope)));
			clazz->addMethod (new Method ("setScope", createMethodWrapper (&Signal::Sender::setScope)));
			clazz->addMethod (new Method ("setPath", createMethodWrapper (&Signal::Sender::setPath)));
			clazz->addMethod (new Method ("getPath", createMethodWrapper (&Signal::Sender::getPath)));
			clazz->addMethod (new Method ("getParamVector", createMethodWrapper (&Signal::Sender::getParamVector)));
			clazz->addMethod (new Method ("setParamVector", createMethodWrapper (&Signal::Sender::setParamVector)));
			clazz->addMethod (new Method ("getParamMap", createMethodWrapper (&Signal::Sender::getParamMap)));
			clazz->addMethod (new Method ("setParamMap", createMethodWrapper (&Signal::Sender::setParamMap)));
		}
	}
	{
		Class *clazz = new Class ("IValidator", typeid (GtkForms::IValidator &), new Reflection::PtrDeleter <GtkForms::IValidator>);
		if (!Manager::add (clazz)) {
			delete clazz;
		}
		else {
			clazz->addBaseClassName ("Object");
			clazz->addMethod (new Method ("validate", createMethodWrapper (&GtkForms::IValidator::validate)));
			clazz->addMethod (new Method ("getModel", createMethodWrapper (&GtkForms::IValidator::getModel)));
		}
	}
	{
		Class *clazz = new Class ("ValidatorVector", typeid (GtkForms::ValidatorVector&), new PtrDeleter <GtkForms::ValidatorVector >);
		if (!Manager::add (clazz)) {;
			delete clazz;
		}
		else { 
			IConstructorPointer *cp = Reflection::ConstructorPointerWrapper2 <GtkForms::ValidatorVector, void>::Level1Wrapper::newConstructorPointer ();
			clazz->addConstructor (new Constructor (cp));

			ICallableWrapper *w = new AddWrapper <GtkForms::ValidatorVector > ();
			clazz->addMethod (new Method ("add", w));

			w = new GetWrapper <GtkForms::ValidatorVector > ();
			clazz->addMethod (new Method ("get", w));

			w = new SetWrapper <GtkForms::ValidatorVector > ();
			clazz->addMethod (new Method ("set", w));

			w = new IteratorWrapper <GtkForms::ValidatorVector > ();
			clazz->addMethod (new Method ("iterator", w));
		}
	}
	{
		Class *clazz = new Class ("AbstractAccessor", typeid (GtkForms::AbstractAccessor &), new Reflection::PtrDeleter <GtkForms::AbstractAccessor>);
		if (!Manager::add (clazz)) {
			delete clazz;
		}
		else {
			clazz->addMethod (new Method ("get", createMethodWrapper (&GtkForms::AbstractAccessor::get)));
			clazz->addMethod (new Method ("set", createMethodWrapper (&GtkForms::AbstractAccessor::set)));
			clazz->addMethod (new Method ("setSessionScope", createMethodWrapper (&GtkForms::AbstractAccessor::setSessionScope)));
			clazz->addMethod (new Method ("setCurrentController", createMethodWrapper (&GtkForms::AbstractAccessor::setCurrentController)));
		}
	}
	{
		Class *clazz = new Class ("ControllerMap", typeid (GtkForms::ControllerMap&), new PtrDeleter <GtkForms::ControllerMap >);
		if (!Manager::add (clazz)) {;
			delete clazz;
		}
		else { 
			IConstructorPointer *cp = Reflection::ConstructorPointerWrapper2 <GtkForms::ControllerMap, void>::Level1Wrapper::newConstructorPointer ();
			clazz->addConstructor (new Constructor (cp));

			ICallableWrapper *w = new AddWrapper <GtkForms::ControllerMap > ();
			clazz->addMethod (new Method ("add", w));

			w = new GetWrapper <GtkForms::ControllerMap > ();
			clazz->addMethod (new Method ("get", w));

			w = new SetWrapper <GtkForms::ControllerMap > ();
			clazz->addMethod (new Method ("set", w));

			w = new IteratorWrapper <GtkForms::ControllerMap > ();
			clazz->addMethod (new Method ("iterator", w));
		}
	}
	{
		Class *clazz = new Class ("AbstractController", typeid (GtkForms::AbstractController &), new Reflection::PtrDeleter <GtkForms::AbstractController>);
		if (!Manager::add (clazz)) {
			delete clazz;
		}
		else {
			clazz->addBaseClassName ("Object");
			clazz->addField (new Field ("validators", Reflection::createFieldWrapper (&GtkForms::AbstractController::validators)));
			clazz->addField (new Field ("loopDelayMs", Reflection::createFieldWrapper (&GtkForms::AbstractController::loopDelayMs)));
			clazz->addField (new Field ("alsoOpen", Reflection::createFieldWrapper (&GtkForms::AbstractController::alsoOpen)));
			clazz->addMethod (new Method ("set", createMethodWrapper (&GtkForms::AbstractController::set)));
			clazz->addMethod (new Method ("get", createMethodWrapper (&GtkForms::AbstractController::get)));
			clazz->addMethod (new Method ("setToSessionScope", createMethodWrapper (&GtkForms::AbstractController::setToSessionScope)));
			clazz->addMethod (new Method ("clearControllerScope", createMethodWrapper (&GtkForms::AbstractController::clearControllerScope)));
			clazz->addMethod (new Method ("getModelAccessor", createMethodWrapper (&GtkForms::AbstractController::getModelAccessor)));
			clazz->addMethod (new Method ("open", createMethodWrapper (&GtkForms::AbstractController::open)));
			clazz->addMethod (new Method ("openList", createMethodWrapper (&GtkForms::AbstractController::openList)));
			clazz->addMethod (new Method ("closeThis", createMethodWrapper (&GtkForms::AbstractController::closeThis)));
			clazz->addMethod (new Method ("close", createMethodWrapper (&GtkForms::AbstractController::close)));
			clazz->addMethod (new Method ("closeList", createMethodWrapper (&GtkForms::AbstractController::closeList)));
			clazz->addMethod (new Method ("replace", createMethodWrapper (&GtkForms::AbstractController::replace)));
			clazz->addMethod (new Method ("getName", createMethodWrapper (&GtkForms::AbstractController::getName)));
			clazz->addMethod (new Method ("contId", createMethodWrapper (&GtkForms::AbstractController::contId)));
			clazz->addMethod (new Method ("findByName", createMethodWrapper (&GtkForms::AbstractController::findByName)));
			clazz->addMethod (new Method ("validate", createMethodWrapper (&GtkForms::AbstractController::validate)));
			clazz->addMethod (new Method ("getValidators", createMethodWrapper (&GtkForms::AbstractController::getValidators)));
			clazz->addMethod (new Method ("refresh", createMethodWrapper (&GtkForms::AbstractController::refresh)));
			clazz->addMethod (new Method ("submit", createMethodWrapper (&GtkForms::AbstractController::submit)));
			clazz->addMethod (new Method ("onStart", createMethodWrapper (&GtkForms::AbstractController::onStart)));
			clazz->addMethod (new Method ("onSubmit", createMethodWrapper (&GtkForms::AbstractController::onSubmit)));
			clazz->addMethod (new Method ("onStop", createMethodWrapper (&GtkForms::AbstractController::onStop)));
			clazz->addMethod (new Method ("getLoopDelayMs", createMethodWrapper (&GtkForms::AbstractController::getLoopDelayMs)));
			clazz->addMethod (new Method ("getLastMs", createMethodWrapper (&GtkForms::AbstractController::getLastMs)));
			clazz->addMethod (new Method ("performIdle", createMethodWrapper (&GtkForms::AbstractController::performIdle)));
			clazz->addMethod (new Method ("onQuit", createMethodWrapper (&GtkForms::AbstractController::onQuit)));
			clazz->addMethod (new Method ("onIdle", createMethodWrapper (&GtkForms::AbstractController::onIdle)));
			clazz->addMethod (new Method ("getView", createMethodWrapper (&GtkForms::AbstractController::getView)));
			clazz->addMethod (new Method ("setView", createMethodWrapper (&GtkForms::AbstractController::setView)));
			clazz->addMethod (new Method ("getApp", createMethodWrapper (&GtkForms::AbstractController::getApp)));
		}
	}
	{
		Class *clazz = new Class ("SubmitTest1Controller", typeid (SubmitTest1Controller &), new Reflection::PtrDeleter <SubmitTest1Controller>);
		if (!Manager::add (clazz)) {
			delete clazz;
		}
		else {
			clazz->addBaseClassName ("AbstractController");
			clazz->addConstructor (new Constructor (Reflection::ConstructorPointerWrapper2 <SubmitTest1Controller, void>::Level1Wrapper::newConstructorPointer ()));
			clazz->addMethod (new Method ("onStart", createMethodWrapper (&SubmitTest1Controller::onStart)));
			clazz->addMethod (new Method ("onSubmit", createMethodWrapper (&SubmitTest1Controller::onSubmit)));
			clazz->addMethod (new Method ("onIdle", createMethodWrapper (&SubmitTest1Controller::onIdle)));
			clazz->addMethod (new Method ("onStop", createMethodWrapper (&SubmitTest1Controller::onStop)));
		}
	}
	{
		Class *clazz = new Class ("TreeView1Controller", typeid (TreeView1Controller &), new Reflection::PtrDeleter <TreeView1Controller>);
		if (!Manager::add (clazz)) {
			delete clazz;
		}
		else {
			clazz->addBaseClassName ("AbstractController");
			clazz->addConstructor (new Constructor (Reflection::ConstructorPointerWrapper2 <TreeView1Controller, void>::Level1Wrapper::newConstructorPointer ()));
			clazz->addMethod (new Method ("onStart", createMethodWrapper (&TreeView1Controller::onStart)));
			clazz->addMethod (new Method ("getUsers", createMethodWrapper (&TreeView1Controller::getUsers)));
			clazz->addMethod (new Method ("setUsers", createMethodWrapper (&TreeView1Controller::setUsers)));
		}
	}
	{
		Class *clazz = new Class ("Demo", typeid (Demo &), new Reflection::PtrDeleter <Demo>);
		if (!Manager::add (clazz)) {
			delete clazz;
		}
		else {
			clazz->addConstructor (new Constructor (Reflection::ConstructorPointerWrapper2 <Demo, void>::Level1Wrapper::newConstructorPointer ()));
			clazz->addField (new Field ("name", Reflection::createFieldWrapper (&Demo::name)));
			clazz->addField (new Field ("description", Reflection::createFieldWrapper (&Demo::description)));
			clazz->addField (new Field ("controllerName", Reflection::createFieldWrapper (&Demo::controllerName)));
			clazz->addField (new Field ("replace", Reflection::createFieldWrapper (&Demo::replace)));
		}
	}
	{
		Class *clazz = new Class ("DemoVector", typeid (DemoVector&), new PtrDeleter <DemoVector >);
		if (!Manager::add (clazz)) {;
			delete clazz;
		}
		else { 
			IConstructorPointer *cp = Reflection::ConstructorPointerWrapper2 <DemoVector, void>::Level1Wrapper::newConstructorPointer ();
			clazz->addConstructor (new Constructor (cp));

			ICallableWrapper *w = new AddWrapper <DemoVector > ();
			clazz->addMethod (new Method ("add", w));

			w = new GetWrapper <DemoVector > ();
			clazz->addMethod (new Method ("get", w));

			w = new SetWrapper <DemoVector > ();
			clazz->addMethod (new Method ("set", w));

			w = new IteratorWrapper <DemoVector > ();
			clazz->addMethod (new Method ("iterator", w));
		}
	}
	{
		Class *clazz = new Class ("DemoCategory", typeid (DemoCategory &), new Reflection::PtrDeleter <DemoCategory>);
		if (!Manager::add (clazz)) {
			delete clazz;
		}
		else {
			clazz->addConstructor (new Constructor (Reflection::ConstructorPointerWrapper2 <DemoCategory, void>::Level1Wrapper::newConstructorPointer ()));
			clazz->addField (new Field ("name", Reflection::createFieldWrapper (&DemoCategory::name)));
			clazz->addField (new Field ("description", Reflection::createFieldWrapper (&DemoCategory::description)));
			clazz->addField (new Field ("demos", Reflection::createFieldWrapper (&DemoCategory::demos)));
		}
	}
	{
		Class *clazz = new Class ("DemoCategoryVector", typeid (DemoCategoryVector&), new PtrDeleter <DemoCategoryVector >);
		if (!Manager::add (clazz)) {;
			delete clazz;
		}
		else { 
			IConstructorPointer *cp = Reflection::ConstructorPointerWrapper2 <DemoCategoryVector, void>::Level1Wrapper::newConstructorPointer ();
			clazz->addConstructor (new Constructor (cp));

			ICallableWrapper *w = new AddWrapper <DemoCategoryVector > ();
			clazz->addMethod (new Method ("add", w));

			w = new GetWrapper <DemoCategoryVector > ();
			clazz->addMethod (new Method ("get", w));

			w = new SetWrapper <DemoCategoryVector > ();
			clazz->addMethod (new Method ("set", w));

			w = new IteratorWrapper <DemoCategoryVector > ();
			clazz->addMethod (new Method ("iterator", w));
		}
	}
	{
		Class *clazz = new Class ("MainController", typeid (MainController &), new Reflection::PtrDeleter <MainController>);
		if (!Manager::add (clazz)) {
			delete clazz;
		}
		else {
			clazz->addBaseClassName ("AbstractController");
			clazz->addConstructor (new Constructor (Reflection::ConstructorPointerWrapper2 <MainController, void>::Level1Wrapper::newConstructorPointer ()));
			clazz->addField (new Field ("demoCategories", Reflection::createFieldWrapper (&MainController::demoCategories)));
			clazz->addMethod (new Method ("onStart", createMethodWrapper (&MainController::onStart)));
			clazz->addMethod (new Method ("onSubmit", createMethodWrapper (&MainController::onSubmit)));
			clazz->addMethod (new Method ("onRowActivated", createMethodWrapper (&MainController::onRowActivated)));
			clazz->addMethod (new Method ("onRowSelected", createMethodWrapper (&MainController::onRowSelected)));
			clazz->addMethod (new Method ("onOpenDirectory", createMethodWrapper (&MainController::onOpenDirectory)));
		}
	}
}

struct Sentinel_gtkFormsDemo {
        Sentinel_gtkFormsDemo ()
        {
                createReflectionDatabase_gtkFormsDemo ();
        }
};

static Sentinel_gtkFormsDemo sentinel_gtkFormsDemo;
} // namespace

