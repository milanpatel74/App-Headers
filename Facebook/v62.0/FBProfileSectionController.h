/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBGraphQLConnectionStoreListener.h>
#import <Facebook/FBGraphQLConnectionControllerListener.h>
#import <Facebook/FBProfileSectionController.h>

@protocol FBProfileSectionControllerDelegate, FBGraphQLConnectionInterface, FBSectionedDataSourceWriting;
@class FBFlattenedArrayController, FBProfileSectionIndexAdapter, FBGQLConnectionFlatteningAdapter, NSString;

@interface FBProfileSectionController : NSObject <FBGraphQLConnectionStoreListener, FBGraphQLConnectionControllerListener, FBProfileSectionController> {

	FBFlattenedArrayController* _models;
	id<FBProfileSectionControllerDelegate> _delegate;
	FBProfileSectionIndexAdapter* _indexAdapter;
	FBGQLConnectionFlatteningAdapter* _adapter;
	id<FBGraphQLConnectionInterface> _connection;
	NSString* _uniqueIdentifier;
	id<FBSectionedDataSourceWriting> _writeInterface;
	/*^block*/id _restoringCompletionBlock;

}

@property (nonatomic,readonly) id<FBSectionedDataSourceWriting> writeInterface;              //@synthesize writeInterface=_writeInterface - In the implementation block
@property (nonatomic,copy) id restoringCompletionBlock;                                      //@synthesize restoringCompletionBlock=_restoringCompletionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long sectionStartIndex; 
@property (nonatomic,readonly) unsigned long long numberOfSections; 
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier;                             //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
-(id<FBSectionedDataSourceWriting>)writeInterface;
-(unsigned long long)sectionStartIndex;
-(void)setSectionStartIndex:(unsigned long long)arg1 ;
-(void)graphQLConnectionStoreDidFinishAttemptingToRestoreFirstPersistedPage:(id)arg1 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingChunkAtIndex:(unsigned long long)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingChunksAtIndexes:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byMergingChunkAtIndexWithPrecedingChunk:(unsigned long long)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingEdgesAtIndexPaths:(id)arg3 deletionReason:(id)arg4 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingLocations:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionControllerDidFinishAttemptingToRestoreFirstPersistedPage:(id)arg1 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingChunkAtIndex:(unsigned long long)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingChunksAtIndexes:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byMergingChunkAtIndexWithPrecedingChunk:(unsigned long long)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingEdgesAtIndexPaths:(id)arg3 deletionReason:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingLocations:(id)arg3 userInfo:(id)arg4 ;
-(id)initWithUniqueIdentifier:(id)arg1 writeInterface:(id)arg2 delegate:(id)arg3 ;
-(void)addListenerToConnection:(id)arg1 ;
-(void)removeListenerFromConnection;
-(id)restoringCompletionBlock;
-(void)setRestoringCompletionBlock:(id)arg1 ;
-(unsigned long long)numberOfSections;
-(NSString *)uniqueIdentifier;
@end
