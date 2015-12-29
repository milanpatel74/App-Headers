//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGViewController.h"

#import "ASWatcher.h"
#import "MFMailComposeViewControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class ASHandle, NSMutableArray, NSString, UITableView;

@interface TGSettingsController : TGViewController <UITableViewDataSource, UITableViewDelegate, MFMailComposeViewControllerDelegate, ASWatcher>
{
    ASHandle *_actionHandle;
    UITableView *_tableView;
    NSMutableArray *_sectionList;
}

@property(retain, nonatomic) NSMutableArray *sectionList; // @synthesize sectionList=_sectionList;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) ASHandle *actionHandle; // @synthesize actionHandle=_actionHandle;
- (void).cxx_destruct;
- (void)displayMidsPressed;
- (void)actionStageActionRequested:(id)arg1 options:(id)arg2;
- (void)actorCompleted:(int)arg1 path:(id)arg2 result:(id)arg3;
- (void)switchDisableBackground;
- (void)switchDoNotJump;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)sendDataButtonPressed;
- (void)sendMoreLogsButtonPressed;
- (void)sendLogsButtonPressed;
- (void)clearVideoCacheButtonPressed;
- (void)clearMemoryCacheButtonPressed;
- (void)clearCacheButtonPressed;
- (void)clearChannelsButtonPressed;
- (void)clearAvatarCacheButtonPressed;
- (void)clearAssetCacheButtonPressed;
- (void)clearItemUriButtonPressed;
- (void)revokeButtonPressed;
- (void)logoutButtonPressed;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidUnload;
- (void)doUnloadView;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

