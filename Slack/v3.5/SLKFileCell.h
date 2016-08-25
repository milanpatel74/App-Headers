/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <Slack/SLKBaseCell.h>

@protocol SLKFileCellDelegate;
@class SLKFile, UIImage, SLKDependencies, UIButton;

@interface SLKFileCell : SLKBaseCell {

	BOOL _inChat;
	BOOL _isMention;
	BOOL _drawCompact;
	BOOL _willAcceptLeftOption;
	BOOL _willAcceptRightOption;
	id<SLKFileCellDelegate> _delegate;
	SLKFile* _file;
	UIImage* _image;
	UIImage* _fullImage;
	UIImage* _avatarImage;
	SLKDependencies* _dependencies;
	UIButton* _leftButton;
	UIButton* _rightButton;
	CGPoint _originalCenter;

}

@property (nonatomic,retain) UIButton * leftButton;                                //@synthesize leftButton=_leftButton - In the implementation block
@property (nonatomic,retain) UIButton * rightButton;                               //@synthesize rightButton=_rightButton - In the implementation block
@property (assign,nonatomic) BOOL willAcceptLeftOption;                            //@synthesize willAcceptLeftOption=_willAcceptLeftOption - In the implementation block
@property (assign,nonatomic) BOOL willAcceptRightOption;                           //@synthesize willAcceptRightOption=_willAcceptRightOption - In the implementation block
@property (assign,nonatomic) CGPoint originalCenter;                               //@synthesize originalCenter=_originalCenter - In the implementation block
@property (assign,nonatomic,__weak) id<SLKFileCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SLKFile * file;                                       //@synthesize file=_file - In the implementation block
@property (nonatomic,retain) UIImage * image;                                      //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImage * fullImage;                                  //@synthesize fullImage=_fullImage - In the implementation block
@property (nonatomic,retain) UIImage * avatarImage;                                //@synthesize avatarImage=_avatarImage - In the implementation block
@property (assign,nonatomic) BOOL inChat;                                          //@synthesize inChat=_inChat - In the implementation block
@property (assign,nonatomic) BOOL isMention;                                       //@synthesize isMention=_isMention - In the implementation block
@property (assign,nonatomic) BOOL drawCompact;                                     //@synthesize drawCompact=_drawCompact - In the implementation block
@property (assign,nonatomic,__weak) SLKDependencies * dependencies;                //@synthesize dependencies=_dependencies - In the implementation block
+(double)height:(BOOL)arg1 ;
-(unsigned long long)directionFromGesture:(id)arg1 ;
-(void)setWillAcceptRightOption:(BOOL)arg1 ;
-(BOOL)willAcceptRightOption;
-(UIImage *)fullImage;
-(void)setFullImage:(UIImage *)arg1 ;
-(UIImage *)avatarImage;
-(void)setAvatarImage:(UIImage *)arg1 ;
-(BOOL)inChat;
-(void)setInChat:(BOOL)arg1 ;
-(BOOL)isMention;
-(void)setIsMention:(BOOL)arg1 ;
-(BOOL)drawCompact;
-(void)setDrawCompact:(BOOL)arg1 ;
-(BOOL)willAcceptLeftOption;
-(void)setWillAcceptLeftOption:(BOOL)arg1 ;
-(SLKDependencies *)dependencies;
-(void)setImage:(UIImage *)arg1 ;
-(void)setDelegate:(id<SLKFileCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<SLKFileCellDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(UIImage *)image;
-(void)handlePan:(id)arg1 ;
-(void)setLeftButton:(UIButton *)arg1 ;
-(void)setRightButton:(UIButton *)arg1 ;
-(UIButton *)leftButton;
-(UIButton *)rightButton;
-(CGPoint)originalCenter;
-(void)setOriginalCenter:(CGPoint)arg1 ;
-(void)setDependencies:(SLKDependencies *)arg1 ;
-(void)setFile:(SLKFile *)arg1 ;
-(SLKFile *)file;
@end
