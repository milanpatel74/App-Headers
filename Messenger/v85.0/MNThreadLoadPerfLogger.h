/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:18 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/MNThreadLoadEventListener.h>
#import <Messenger/MNMessagesAppearanceEventListener.h>

@class MNPerfLoggingEventDescriptor, NSMutableDictionary, MNLocalThreadQuery, MNThreadViewModel, NSString;

@interface MNThreadLoadPerfLogger : NSObject <FBViewerContextClassProvidable, MNThreadLoadEventListener, MNMessagesAppearanceEventListener> {

	MNPerfLoggingEventDescriptor* _eventDescriptor;
	NSMutableDictionary* _extraDict;
	MNLocalThreadQuery* _localThreadQuery;
	unsigned long long _state;
	MNThreadViewModel* _oldThreadViewModel;
	BOOL _loadingFromNetwork;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_cleanUpCachedStates;
-(void)_markStartForThreadLoadEvent:(id)arg1 localThreadQuery:(id)arg2 ;
-(void)_markThreadLoadedWithThreadViewModel:(id)arg1 ;
-(void)_markStopWhenMessagesDidAppearWithThreadViewModel:(id)arg1 ;
-(void)_markAbortedWhenMessagesDidDisappearWithThreadViewModel:(id)arg1 ;
-(BOOL)_checkThreadDescriptorMatchesThreadViewModel:(id)arg1 ;
-(void)threadWillBeginLoadingWithLocalThreadQuery:(id)arg1 eventDescriptor:(id)arg2 ;
-(void)threadDidBeginLoadingFromNetwork:(id)arg1 ;
-(void)threadDidEndLoadingWithThreadViewModel:(id)arg1 ;
-(void)messagesViewWillBindToThreadViewModel:(id)arg1 isReusingViewController:(BOOL)arg2 ;
-(void)messagesViewWillAppearWithThreadViewModel:(id)arg1 ;
-(void)messagesViewReadyToAppearWithThreadViewModel:(id)arg1 composerState:(id)arg2 ;
-(void)messagesViewDidAppearWithThreadViewModel:(id)arg1 ;
-(void)messagesViewDidOpenThreadViewModel:(id)arg1 ;
-(void)messagesViewWillUnbindFromThreadViewModel:(id)arg1 ;
-(void)messagesViewDidDisappear;
@end
