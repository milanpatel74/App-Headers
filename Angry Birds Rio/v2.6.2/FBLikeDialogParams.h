/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsRio/AngryBirdsRio-Structs.h>
#import <AngryBirdsRio/FBDialogsParams.h>

@class NSString;

@interface FBLikeDialogParams : FBDialogsParams {

	NSString* _objectID;
	unsigned long long _objectType;

}

@property (nonatomic,copy) NSString * objectID;                          //@synthesize objectID=_objectID - In the implementation block
@property (assign,nonatomic) unsigned long long objectType;              //@synthesize objectType=_objectType - In the implementation block
+(id)methodName;
-(id)dictionaryMethodArgs;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)validate;
-(void)setObjectID:(NSString *)arg1 ;
-(NSString *)objectID;
-(void)setObjectType:(unsigned long long)arg1 ;
-(unsigned long long)objectType;
@end
