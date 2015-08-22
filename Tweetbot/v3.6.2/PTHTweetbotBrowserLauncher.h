/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:06:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/ECBB6493-3CD3-4031-8AE5-B625F29152BF/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface PTHTweetbotBrowserLauncher : NSObject {

	NSString* _name;
	NSString* _scheme;
	NSString* _launchURLString;

}

@property (nonatomic,copy) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * scheme;                       //@synthesize scheme=_scheme - In the implementation block
@property (nonatomic,copy) NSString * launchURLString;              //@synthesize launchURLString=_launchURLString - In the implementation block
+(id)availableBrowserLaunchers;
+(id)defaultBrowserName;
+(id)defaultBrowserLauncher;
+(id)browserLauncherWithScheme:(id)arg1 ;
+(void)openURL:(id)arg1 ;
-(void)setLaunchURLString:(NSString *)arg1 ;
-(NSString *)launchURLString;
-(BOOL)isEqual:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)scheme;
-(void)openURL:(id)arg1 ;
-(void)setScheme:(NSString *)arg1 ;
@end
