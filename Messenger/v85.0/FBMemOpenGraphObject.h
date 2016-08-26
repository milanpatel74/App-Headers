/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBWildeMemModelObject.h>
#import <Messenger/FBAvatarProtocol.h>
#import <Messenger/FBOpenGraphEntity.h>
#import <Messenger/FBOpenGraphAvatarEntity.h>
#import <Messenger/FBTimelineAppCollectionEntityProtocol.h>
#import <Messenger/FBQueriedNodeFieldsProtocol.h>
#import <Messenger/FBQueriedEntityFieldsProtocol.h>
#import <Messenger/FBQueriedProfileFieldsProtocol.h>
#import <Messenger/FBQueriedPlaceFieldsProtocol.h>
#import <Messenger/FBQueriedSearchResultFieldsProtocol.h>
#import <Messenger/FBQueriedSearchCombinedResultFieldsProtocol.h>

@class NSString;

@interface FBMemOpenGraphObject : FBWildeMemModelObject <FBAvatarProtocol, FBOpenGraphEntity, FBOpenGraphAvatarEntity, FBTimelineAppCollectionEntityProtocol, FBQueriedNodeFieldsProtocol, FBQueriedEntityFieldsProtocol, FBQueriedProfileFieldsProtocol, FBQueriedPlaceFieldsProtocol, FBQueriedSearchResultFieldsProtocol, FBQueriedSearchCombinedResultFieldsProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * descriptionText; 
@property (nonatomic,readonly) NSString * name; 
-(id)fbid;
-(id)entityURL;
-(BOOL)hasNativeIOSApp;
@end
