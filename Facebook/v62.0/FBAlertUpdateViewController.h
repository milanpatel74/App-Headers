/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:52 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBItmsHandlerDelegate.h>
#import <Facebook/FBAutoUpdaterHandlerDelegate.h>

@class NSString;

@interface FBAlertUpdateViewController : NSObject <FBItmsHandlerDelegate, FBAutoUpdaterHandlerDelegate> {

	BOOL _verboseMode;

}

@property (assign,nonatomic) BOOL verboseMode;                      //@synthesize verboseMode=_verboseMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)singleton;
-(void)itmsHandler:(id)arg1 shouldInstallUpdate:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)itmsHandler:(id)arg1 cancelledProcessingUpdate:(id)arg2 ;
-(void)autoUpdaterHandler:(id)arg1 shouldInstallUpdate:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)autoUpdaterHandler:(id)arg1 willBeginProcessingUpdate:(id)arg2 ;
-(void)autoUpdaterHandler:(id)arg1 willBeginStage:(unsigned long long)arg2 ;
-(void)autoUpdaterHandler:(id)arg1 didFinishProcessingUpdate:(id)arg2 error:(id)arg3 ;
-(BOOL)verboseMode;
-(void)setVerboseMode:(BOOL)arg1 ;
@end
