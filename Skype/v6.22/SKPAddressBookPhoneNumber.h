/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface SKPAddressBookPhoneNumber : NSObject <NSCoding> {

	unsigned long long _label;
	NSString* _number;

}

@property (nonatomic,readonly) unsigned long long label;                    //@synthesize label=_label - In the implementation block
@property (nonatomic,copy,readonly) NSString * number;                      //@synthesize number=_number - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedLabel; 
+(long long)encodingVersion;
+(id)localizedNameForLabel:(unsigned long long)arg1 ;
-(id)initWithLabel:(unsigned long long)arg1 number:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)label;
-(NSString *)localizedLabel;
-(NSString *)number;
@end
