/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface ECAPIOrderItem : NSObject {

	NSString* _type;
	NSString* _target;
	NSString* _targetIdentifier;
	NSArray* _features;
	NSString* _status;

}

@property (nonatomic,retain) NSString * type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * target;                        //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) NSString * targetIdentifier;              //@synthesize targetIdentifier=_targetIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * features;                       //@synthesize features=_features - In the implementation block
@property (nonatomic,retain) NSString * status;                        //@synthesize status=_status - In the implementation block
-(NSString *)targetIdentifier;
-(void)setTarget:(NSString *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSString *)target;
-(NSString *)status;
-(void)setStatus:(NSString *)arg1 ;
-(void)setTargetIdentifier:(NSString *)arg1 ;
-(NSArray *)features;
-(void)setFeatures:(NSArray *)arg1 ;
@end
