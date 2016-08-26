/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:20 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface MNMessagesListDeltaUpdateBuilder : NSObject {

	unsigned long long _threadContextUpdate;
	unsigned long long _threadMontageUpdate;
	unsigned long long _loadingUpdate;
	NSArray* _updateItems;

}
+(id)messagesListDeltaUpdate;
+(id)messagesListDeltaUpdateFromExistingMessagesListDeltaUpdate:(id)arg1 ;
-(id)withThreadContextUpdate:(unsigned long long)arg1 ;
-(id)withThreadMontageUpdate:(unsigned long long)arg1 ;
-(id)withLoadingUpdate:(unsigned long long)arg1 ;
-(id)withUpdateItems:(id)arg1 ;
-(id)build;
@end
