/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:27 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSDictionary, NSSet, NSIndexSet;

@interface CKTransactionalComponentDataSourceChangeset : NSObject {

	NSDictionary* _updatedItems;
	NSSet* _removedItems;
	NSIndexSet* _removedSections;
	NSDictionary* _movedItems;
	NSIndexSet* _insertedSections;
	NSDictionary* _insertedItems;
	NSDictionary* _userInfo;

}

@property (nonatomic,copy,readonly) NSDictionary * updatedItems;                //@synthesize updatedItems=_updatedItems - In the implementation block
@property (nonatomic,copy,readonly) NSSet * removedItems;                       //@synthesize removedItems=_removedItems - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * removedSections;               //@synthesize removedSections=_removedSections - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * movedItems;                  //@synthesize movedItems=_movedItems - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * insertedSections;              //@synthesize insertedSections=_insertedSections - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * insertedItems;               //@synthesize insertedItems=_insertedItems - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userInfo;                    //@synthesize userInfo=_userInfo - In the implementation block
-(id)initWithUpdatedItems:(id)arg1 removedItems:(id)arg2 removedSections:(id)arg3 movedItems:(id)arg4 insertedSections:(id)arg5 insertedItems:(id)arg6 ;
-(NSDictionary *)updatedItems;
-(NSDictionary *)movedItems;
-(NSIndexSet *)removedSections;
-(NSDictionary *)insertedItems;
-(NSSet *)removedItems;
-(NSIndexSet *)insertedSections;
-(NSDictionary *)userInfo;
@end
