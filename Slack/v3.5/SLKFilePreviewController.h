/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/SLNavigationController.h>

@class SLKDependencies;

@interface SLKFilePreviewController : SLNavigationController {

	BOOL _showComments;
	SLKDependencies* _dependencies;

}

@property (assign,nonatomic,__weak) SLKDependencies * dependencies;                    //@synthesize dependencies=_dependencies - In the implementation block
@property (assign,getter=shouldShowComments,nonatomic) BOOL showComments;              //@synthesize showComments=_showComments - In the implementation block
+(id)viewControllerForFile:(id)arg1 dependencies:(id)arg2 ;
-(id)initWithFileId:(id)arg1 dependencies:(id)arg2 ;
-(id)initWithFile:(id)arg1 dependencies:(id)arg2 ;
-(BOOL)shouldShowComments;
-(SLKDependencies *)dependencies;
-(void)commonInit;
-(void)setDependencies:(SLKDependencies *)arg1 ;
-(void)setShowComments:(BOOL)arg1 ;
@end
