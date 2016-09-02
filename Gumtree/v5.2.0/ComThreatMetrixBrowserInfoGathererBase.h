/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 30, 2016 at 12:04:10 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4EC3D7DE-EC7A-4340-8E6F-37E25C97EB19/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ComThreatMetrixBrowserInfoGathererBase : NSObject {

	unsigned _mimeTypeCount;
	NSString* _userAgent;
	NSString* _pluginsFromJS;
	NSString* _pluginCount;
	NSString* _plugins;
	NSString* _mimeTypes;

}

@property (nonatomic,retain) NSString * userAgent;                  //@synthesize userAgent=_userAgent - In the implementation block
@property (nonatomic,retain) NSString * pluginsFromJS;              //@synthesize pluginsFromJS=_pluginsFromJS - In the implementation block
@property (nonatomic,retain) NSString * pluginCount;                //@synthesize pluginCount=_pluginCount - In the implementation block
@property (nonatomic,retain) NSString * plugins;                    //@synthesize plugins=_plugins - In the implementation block
@property (nonatomic,retain) NSString * mimeTypes;                  //@synthesize mimeTypes=_mimeTypes - In the implementation block
@property (assign,nonatomic) unsigned mimeTypeCount;                //@synthesize mimeTypeCount=_mimeTypeCount - In the implementation block
+(id)getFakeBrowserString;
-(void)setPluginCount:(NSString *)arg1 ;
-(NSString *)pluginCount;
-(void)setPluginsFromJS:(NSString *)arg1 ;
-(void)setMimeTypeCount:(unsigned)arg1 ;
-(unsigned)mimeTypeCount;
-(NSString *)pluginsFromJS;
-(id)init;
-(void)setMimeTypes:(NSString *)arg1 ;
-(NSString *)mimeTypes;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSString *)userAgent;
-(NSString *)plugins;
-(void)setPlugins:(NSString *)arg1 ;
@end
