/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:00 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/NSCoding.h>

@class NSString;

@interface ATSurveyQuestionAnswer : NSObject <NSCoding> {

	NSString* identifier;
	NSString* value;

}

@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * value; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
@end
