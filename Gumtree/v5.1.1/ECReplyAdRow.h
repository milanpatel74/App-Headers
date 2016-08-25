/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ECReplyAdRow : NSObject {

	NSString* _identifier;
	long long _value;

}

@property (nonatomic,copy) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long value;                  //@synthesize value=_value - In the implementation block
+(long long)rowTypeFromString:(id)arg1 ;
+(id)rowNameFromType:(long long)arg1 ;
+(id)rowWithIdentifier:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 rowType:(long long)arg2 ;
-(id)description;
-(NSString *)identifier;
-(long long)value;
-(void)setValue:(long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
@end
