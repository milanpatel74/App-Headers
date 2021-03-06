/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:21:52 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6DE74A4E-11EF-47B8-8E27-4C42F9CB282C/Palaver.app/Palaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PLVNetworkAuthenticationSchemeField : NSObject {

	BOOL _secure;
	BOOL _required;
	NSString* _name;
	NSString* _value;

}

@property (nonatomic,copy,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (getter=isSecure,nonatomic,readonly) BOOL secure;                  //@synthesize secure=_secure - In the implementation block
@property (getter=isRequired,nonatomic,readonly) BOOL required;              //@synthesize required=_required - In the implementation block
@property (nonatomic,copy) NSString * value;                                 //@synthesize value=_value - In the implementation block
-(id)initWithName:(id)arg1 secure:(BOOL)arg2 required:(BOOL)arg3 ;
-(NSString *)name;
-(BOOL)isValid;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(BOOL)isSecure;
-(BOOL)isRequired;
@end

