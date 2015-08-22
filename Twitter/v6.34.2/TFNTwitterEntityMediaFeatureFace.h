/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/NSCoding.h>
#import <Twitter/TFNPlistSerialization.h>

@class NSString;

@interface TFNTwitterEntityMediaFeatureFace : NSObject <NSCoding, TFNPlistSerialization> {

	CGRect _frame;

}

@property (nonatomic,readonly) CGRect frame;                        //@synthesize frame=_frame - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)plistDictionaryValue;
-(id)initWithPlistDictionary:(id)arg1 ;
-(CGRect)_featureRectFromDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CGRect)frame;
-(NSString *)description;
@end
