/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:10 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface GAIEcommerceProduct : NSObject {

	NSMutableDictionary* _parameters;

}

@property (nonatomic,retain) NSMutableDictionary * parameters;              //@synthesize parameters=_parameters - In the implementation block
-(id)setBrand:(id)arg1 ;
-(id)setCouponCode:(id)arg1 ;
-(id)setCustomDimension:(unsigned long long)arg1 value:(id)arg2 ;
-(id)setCustomMetric:(unsigned long long)arg1 value:(id)arg2 ;
-(id)buildWithIndex:(unsigned long long)arg1 ;
-(id)buildWithListIndex:(unsigned long long)arg1 index:(unsigned long long)arg2 ;
-(id)setQuantity:(id)arg1 ;
-(id)init;
-(id)setName:(id)arg1 ;
-(id)setCategory:(id)arg1 ;
-(id)setPosition:(id)arg1 ;
-(NSMutableDictionary *)parameters;
-(void)setParameters:(NSMutableDictionary *)arg1 ;
-(id)setNumber:(id)arg1 forKey:(id)arg2 ;
-(id)setId:(id)arg1 ;
-(id)setVariant:(id)arg1 ;
-(id)setString:(id)arg1 forKey:(id)arg2 ;
-(id)setPrice:(id)arg1 ;
@end
