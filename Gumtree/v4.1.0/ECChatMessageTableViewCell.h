/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:15 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <UIKit/UITableViewCell.h>

@protocol ECChatMessageTableViewCellDelegate;
@class UILabel, UIImage, UIImageView, UIButton, UIActivityIndicatorView, UILongPressGestureRecognizer, NSDateFormatter;

@interface ECChatMessageTableViewCell : UITableViewCell {

	id<ECChatMessageTableViewCellDelegate> _delegate;
	UILabel* _messageLabel;
	UILabel* _dateLabel;
	UIImage* _messageError;
	UIImageView* _bubbleImageView;
	UIButton* _messageErrorButton;
	UIActivityIndicatorView* _activityIndicatorView;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	NSDateFormatter* _dateFormatter;
	NSDateFormatter* _timeAndDayFormatter;
	NSDateFormatter* _timeFormatter;

}

@property (assign,nonatomic,__weak) id<ECChatMessageTableViewCellDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;                                                 //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) UILabel * dateLabel;                                                    //@synthesize dateLabel=_dateLabel - In the implementation block
@property (nonatomic,retain) UIImage * messageError;                                                 //@synthesize messageError=_messageError - In the implementation block
@property (nonatomic,retain) UIImageView * bubbleImageView;                                          //@synthesize bubbleImageView=_bubbleImageView - In the implementation block
@property (nonatomic,retain) UIButton * messageErrorButton;                                          //@synthesize messageErrorButton=_messageErrorButton - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicatorView;                        //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressGestureRecognizer;              //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (nonatomic,retain) NSDateFormatter * dateFormatter;                                        //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (nonatomic,retain) NSDateFormatter * timeAndDayFormatter;                                  //@synthesize timeAndDayFormatter=_timeAndDayFormatter - In the implementation block
@property (nonatomic,retain) NSDateFormatter * timeFormatter;                                        //@synthesize timeFormatter=_timeFormatter - In the implementation block
+(id)fontForChatMessage:(id)arg1 ;
+(id)textColorForChatMessage:(id)arg1 ;
+(CGSize)sizeForChatMessage:(id)arg1 withFont:(id)arg2 withColor:(id)arg3 ;
+(double)heightForCellWithChatMessage:(id)arg1 ;
-(void)setupBubbleImageView;
-(void)setupMessageLabel;
-(void)setupMessageDateLabel;
-(void)setupActivityIndicatorView;
-(void)setupMessageErrorButton;
-(void)configureGesturesRecognizers;
-(void)setTimeAndDayFormatter:(NSDateFormatter *)arg1 ;
-(NSDateFormatter *)timeAndDayFormatter;
-(void)showMenuOptions:(id)arg1 ;
-(void)setBubbleImageView:(UIImageView *)arg1 ;
-(UIImageView *)bubbleImageView;
-(void)setMessageErrorButton:(UIButton *)arg1 ;
-(UIButton *)messageErrorButton;
-(void)messageErrorButtonAction:(id)arg1 ;
-(void)hideMessageErrorButton;
-(void)hideActivityIndicatorView;
-(void)displayActivityIndicatorView;
-(void)displayMessageErrorButton;
-(void)displayWithChatMessage:(id)arg1 ;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(NSDateFormatter *)timeFormatter;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(void)setDateLabel:(UILabel *)arg1 ;
-(NSDateFormatter *)dateFormatter;
-(void)setDelegate:(id<ECChatMessageTableViewCellDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<ECChatMessageTableViewCellDelegate>)delegate;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)setLongPressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(BOOL)canBecomeFirstResponder;
-(UILabel *)messageLabel;
-(void)copy:(id)arg1 ;
-(UILabel *)dateLabel;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(void)setTimeFormatter:(NSDateFormatter *)arg1 ;
-(void)setMessageError:(UIImage *)arg1 ;
-(UIImage *)messageError;
@end
