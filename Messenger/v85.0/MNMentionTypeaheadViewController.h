/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:21 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Messenger/MNMentionBotTypeaheadFetcherDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNComposerTextParserListening.h>

@protocol FBProvider, MNMentionTypeaheadViewControllerDelegate;
@class FBUserSession, FBImageDownloader, NSArray, NSString, MNMentionBotTypeaheadFetcher;

@interface MNMentionTypeaheadViewController : UITableViewController <MNMentionBotTypeaheadFetcherDelegate, UITableViewDataSource, UITableViewDelegate, FBClassProvidable, MNComposerTextParserListening> {

	FBUserSession* _session;
	FBImageDownloader* _imageDownloader;
	NSArray* _typeaheadViewCellViewModels;
	NSString* _currentQuery;
	id<FBProvider> _mentionBotTypeheadFetcherProvider;
	MNMentionBotTypeaheadFetcher* _mentionBotTypeheadFetcher;
	BOOL _showsTypeahead;
	id<MNMentionTypeaheadViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNMentionTypeaheadViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsTypeahead;                                                       //@synthesize showsTypeahead=_showsTypeahead - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)didParseStickerTriggerQuery:(id)arg1 ;
-(void)didParseHashtagQuery:(id)arg1 ;
-(void)didParseEmptyQuery;
-(void)didParseMentionTriggerQuery:(id)arg1 ;
-(BOOL)showsTypeahead;
-(void)setShowsTypeahead:(BOOL)arg1 ;
-(id)initWithSession:(id)arg1 imageDownloader:(id)arg2 mentionBotTypeheadFetcherProvider:(id)arg3 ;
-(void)_updateTypeaheadView;
-(void)_reloadTableViewIfNeeded;
-(void)_setCurrentQuery:(id)arg1 needsFetching:(BOOL)arg2 ;
-(void)_initFetcherIfNecessary;
-(void)mentionBotTypeaheadFetcher:(id)arg1 didFinishFetchingWithViewModels:(id)arg2 ;
-(void)setDelegate:(id<MNMentionTypeaheadViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<MNMentionTypeaheadViewControllerDelegate>)delegate;
-(void)viewDidLoad;
@end
