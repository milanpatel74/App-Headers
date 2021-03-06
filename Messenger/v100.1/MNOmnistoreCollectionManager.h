/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNOmnistoreCollectionManagerDelegate;
@class FBOmnistore, FBOmnistoreCollectionName, FBOmnistoreCollection;

@interface MNOmnistoreCollectionManager : NSObject {

	FBOmnistore* _omnistore;
	FBOmnistoreCollectionName* _collectionName;
	FBOmnistoreCollection* _collection;
	id<MNOmnistoreCollectionManagerDelegate> _delegate;

}

@property (nonatomic,copy,readonly) FBOmnistoreCollectionName * collectionName;                     //@synthesize collectionName=_collectionName - In the implementation block
@property (nonatomic,readonly) FBOmnistoreCollection * collection;                                  //@synthesize collection=_collection - In the implementation block
@property (assign,nonatomic,__weak) id<MNOmnistoreCollectionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_handleDeltaCallback:(id)arg1 ;
-(id)initWithOmnistore:(id)arg1 collectionName:(id)arg2 ;
-(id)getObjectWithPrimaryKey:(id)arg1 ;
-(void)setDelegate:(id<MNOmnistoreCollectionManagerDelegate>)arg1 ;
-(id<MNOmnistoreCollectionManagerDelegate>)delegate;
-(void)start;
-(FBOmnistoreCollectionName *)collectionName;
-(FBOmnistoreCollection *)collection;
@end

