/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:41 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface TFNTwitterSignUpSuggestion : NSObject {

	NSString* _text;

}

@property (nonatomic,readonly) NSString * text;              //@synthesize text=_text - In the implementation block
+(id)suggestionsWithJSONData:(id)arg1 error:(out id*)arg2 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(NSString *)text;
@end
