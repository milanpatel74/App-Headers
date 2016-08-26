/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:22 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBMessageAttachmentServerFbIdQuerier.h>

@protocol MNMQTTSending, MNMQTTListenerManaging;
@class FBMQTTListener, NSMutableDictionary, NSString;

@interface FBMMQTTMediaAttachmentServerFbIdQuerier : NSObject <FBMessageAttachmentServerFbIdQuerier> {

	id<MNMQTTSending> _sender;
	id<MNMQTTListenerManaging> _listenerManager;
	FBMQTTListener* _messageListener;
	NSMutableDictionary* _callbackBlocks;
	mutex _mutex;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setupMQTTListener;
-(void)_addCallback:(/*^block*/id)arg1 forHash:(id)arg2 ;
-(void)_removeCallback:(/*^block*/id)arg1 forHash:(id)arg2 ;
-(void)_processMQTTPayload:(id)arg1 ;
-(void)queryMediaFbIdFromServer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithMQTTSender:(id)arg1 listenerManager:(id)arg2 ;
@end
