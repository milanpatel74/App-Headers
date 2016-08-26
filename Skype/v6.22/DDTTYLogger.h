/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/DDAbstractLogger.h>
#import <Skype/DDLogger.h>

@class NSCalendar, NSString, NSMutableArray, NSMutableDictionary;

@interface DDTTYLogger : DDAbstractLogger <DDLogger> {

	NSCalendar* calendar;
	unsigned long long calendarUnitFlags;
	NSString* appName;
	char* app;
	unsigned long long appLen;
	NSString* processID;
	char* pid;
	unsigned long long pidLen;
	BOOL colorsEnabled;
	NSMutableArray* colorProfilesArray;
	NSMutableDictionary* colorProfilesDict;

}

@property (assign) BOOL colorsEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 fromColor:(id)arg4 ;
+(void)initialize_colors_256;
+(void)initialize_colors_16;
+(unsigned long long)codeIndexForColor:(id)arg1 ;
+(id)sharedInstance;
+(void)initialize;
-(id)loggerName;
-(void)setForegroundColor:(id)arg1 backgroundColor:(id)arg2 forFlag:(int)arg3 ;
-(void)loadDefaultColorProfiles;
-(void)setForegroundColor:(id)arg1 backgroundColor:(id)arg2 forFlag:(int)arg3 context:(int)arg4 ;
-(void)clearColorsForFlag:(int)arg1 context:(int)arg2 ;
-(BOOL)colorsEnabled;
-(void)setColorsEnabled:(BOOL)arg1 ;
-(void)setForegroundColor:(id)arg1 backgroundColor:(id)arg2 forTag:(id)arg3 ;
-(void)clearColorsForFlag:(int)arg1 ;
-(void)clearColorsForTag:(id)arg1 ;
-(void)clearColorsForAllFlags;
-(void)clearColorsForAllTags;
-(void)clearAllColors;
-(id)init;
-(void)logMessage:(id)arg1 ;
@end
