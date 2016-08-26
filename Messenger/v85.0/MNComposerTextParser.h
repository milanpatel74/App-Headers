/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:21 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNComposeViewControllerListener.h>
#import <Messenger/MNComposerTypingListener.h>

@protocol MNComposerExtension;
@class FBUserSession, NSString, MNComposerTextParserListeningAnnouncer, FBMobileConfigContextManager, NSTimer;

@interface MNComposerTextParser : NSObject <FBClassProvidable, MNComposeViewControllerListener, MNComposerTypingListener> {

	FBUserSession* _session;
	id<MNComposerExtension> _currentExtension;
	NSString* _currentText;
	MNComposerTextParserListeningAnnouncer* _announcer;
	FBMobileConfigContextManager* _configManager;
	NSTimer* _fetchingDelayTimer;
	BOOL _needsFetchingDelay;
	long long _searchMode;

}

@property (assign,nonatomic) long long searchMode;                  //@synthesize searchMode=_searchMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)didTransitionToExtension:(id)arg1 ;
-(id)initWithSession:(id)arg1 configManager:(id)arg2 ;
-(void)composerTextDidChangeToText:(id)arg1 ;
-(long long)searchMode;
-(void)_composerStateDidUpdateCanAutoTrigger:(BOOL)arg1 ;
-(BOOL)_isParsingMentionTriggerEnabled;
-(BOOL)_tryParsingMentionTrigger;
-(void)_handleParseMentionTrigger:(id)arg1 ;
-(id)_getFetchingDelayTimerWithDelay:(double)arg1 selector:(SEL)arg2 ;
-(BOOL)_tryParsingHashtag;
-(void)_handleParsedHashtag:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)setSearchMode:(long long)arg1 ;
@end
