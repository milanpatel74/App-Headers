/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:13 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

@class FBScenePath, NSString;


@protocol FBServiceConfigurationCoring <NSObject>
@property (nonatomic,retain) FBScenePath * scenePath; 
@property (nonatomic,copy) NSString * logNamespace; 
@property (nonatomic,copy) NSString * logName; 
@property (nonatomic,retain) id<FBCallPath> callPath; 
@required
-(NSString *)logNamespace;
-(void)setLogNamespace:(id)arg1;
-(id<FBCallPath>)callPath;
-(void)setCallPath:(id)arg1;
-(FBScenePath *)scenePath;
-(void)setScenePath:(id)arg1;
-(void)setLogName:(id)arg1;
-(NSString *)logName;

@end
