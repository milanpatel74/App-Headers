/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/NameValueTableCell.h>

@class EBNMessage, NSString, UIButton;

@interface MessageSubjectCelliPad : NameValueTableCell {

	BOOL isReply;
	EBNMessage* message;
	NSString* subjectContentString;
	UIButton* markButton;
	UIButton* replyButton;
	UIButton* deleteButton;
	id _target;
	SEL _replyAction;
	SEL _deleteAction;

}

@property (nonatomic,retain) NSString * subjectContentString; 
@property (nonatomic,retain) UIButton * markButton; 
@property (nonatomic,retain) UIButton * replyButton; 
@property (nonatomic,retain) UIButton * deleteButton; 
@property (assign,nonatomic) BOOL isReply; 
@property (nonatomic,retain) EBNMessage * message; 
@property (assign,nonatomic,__weak) id target;                             //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL replyAction;                              //@synthesize replyAction=_replyAction - In the implementation block
@property (assign,nonatomic) SEL deleteAction;                             //@synthesize deleteAction=_deleteAction - In the implementation block
-(void)markButtonTapped:(id)arg1 ;
-(void)replyButtonTapped:(id)arg1 ;
-(void)setSubjectContentString:(NSString *)arg1 ;
-(void)markAsUnread:(id)arg1 ;
-(void)markAsUnflagged:(id)arg1 ;
-(void)markAsFlagged:(id)arg1 ;
-(SEL)replyAction;
-(NSString *)subjectContentString;
-(UIButton *)markButton;
-(void)setMarkButton:(UIButton *)arg1 ;
-(UIButton *)replyButton;
-(void)setReplyButton:(UIButton *)arg1 ;
-(void)setReplyAction:(SEL)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTarget:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)target;
-(EBNMessage *)message;
-(void)setMessage:(EBNMessage *)arg1 ;
-(void)setIsReply:(BOOL)arg1 ;
-(BOOL)isReply;
-(void)deleteButtonTapped:(id)arg1 ;
-(SEL)deleteAction;
-(void)setDeleteAction:(SEL)arg1 ;
-(UIButton *)deleteButton;
-(void)setDeleteButton:(UIButton *)arg1 ;
@end
