/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:45 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBLinkedDictionary, NSMutableDictionary;

@interface FBBlockTable : NSObject {

	FBLinkedDictionary* _allBlocks;
	NSMutableDictionary* _blocksByType;
	NSMutableDictionary* _typesByBlockID;

}
-(id)_keyForBlock:(id)arg1 ;
-(id)_blocksForType:(id)arg1 ;
-(id)blockWithID:(id)arg1 ;
-(void)removeBlock:(id)arg1 ;
-(id)blockTypeForBlock:(id)arg1 ;
-(unsigned long long)blockCountForType:(id)arg1 ;
-(id)firstBlockOfType:(id)arg1 ;
-(id)firstBlock;
-(id)blockAfterBlock:(id)arg1 ;
-(void)addBlock:(id)arg1 ofType:(id)arg2 ;
-(id)init;
-(unsigned long long)blockCount;
-(id)lastBlock;
@end

