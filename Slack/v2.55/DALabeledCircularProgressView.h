/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:57:03 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <Slack/DACircularProgressView.h>

@class UILabel;

@interface DALabeledCircularProgressView : DACircularProgressView {

	UILabel* _progressLabel;

}

@property (nonatomic,retain) UILabel * progressLabel;              //@synthesize progressLabel=_progressLabel - In the implementation block
-(void)initializeLabel;
-(void)setProgressLabel:(UILabel *)arg1 ;
-(UILabel *)progressLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

