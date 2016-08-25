//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKPViewController.h"

#import "SKPViewModelArrayControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MKTableView, NSString, SKPDialpadContainerViewController, SKPEmptyListView, SKPNativeContactsPickerController, SKPViewModelArrayController;

@interface SKPRecentCallsViewController : SKPViewController <UITableViewDelegate, UITableViewDataSource, SKPViewModelArrayControllerDelegate>
{
    MKTableView *_tableView;
    SKPEmptyListView *_emptyPageView;
    SKPViewModelArrayController *_controller;
    SKPNativeContactsPickerController *_pickerController;
    SKPDialpadContainerViewController *_dialpadViewController;
}

+ (_Bool)shouldBeLiveCallAware;
+ (_Bool)shouldBeConnectionAware;
+ (id)predicateForSearchingPSTNCallsForString:(id)arg1;
@property(nonatomic) __weak SKPDialpadContainerViewController *dialpadViewController; // @synthesize dialpadViewController=_dialpadViewController;
@property(retain, nonatomic) SKPNativeContactsPickerController *pickerController; // @synthesize pickerController=_pickerController;
@property(retain, nonatomic) SKPViewModelArrayController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) SKPEmptyListView *emptyPageView; // @synthesize emptyPageView=_emptyPageView;
@property(retain, nonatomic) MKTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)onKeyboardMovedNotification:(id)arg1;
- (void)updateEmptyViewIsHidden;
- (void)controllerDidChangeAllContent:(id)arg1;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controller:(id)arg1 didMoveSectionAtIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)controller:(id)arg1 didInsertSectionsAtIndexes:(id)arg2;
- (void)controller:(id)arg1 didDeleteSectionsAtIndexes:(id)arg2;
- (void)controller:(id)arg1 didMoveObjectAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)controller:(id)arg1 didInsertObjectsAtIndexPaths:(id)arg2;
- (void)controller:(id)arg1 didDeleteObjectsAtIndexPaths:(id)arg2;
- (void)controllerWillChangeContent:(id)arg1;
- (void)controller:(id)arg1 didUpdateObjectAtIndexPath:(id)arg2 updateType:(long long)arg3;
- (void)configureCell:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)showInvalidPSTNNumberAlert;
- (void)showAddressBook:(id)arg1;
- (void)presentDialpad:(id)arg1;
- (void)hideDialpadKeys:(id)arg1;
- (void)presentDialpadViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2 withNumber:(id)arg3 name:(id)arg4;
- (void)presentDialpadViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2 withNumber:(id)arg3 name:(id)arg4 error:(id)arg5;
- (void)skp_didChangeTopBannerOffset:(double)arg1;
- (id)viewConstraints;
- (void)updateViewConstraints;
- (void)updateInsets;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)willMoveToParentViewController:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
