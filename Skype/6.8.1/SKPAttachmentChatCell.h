//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKPChatCell.h"

@class MKBubbleView, NSAttributedString, SKPAttributedLabel, UIView;

@interface SKPAttachmentChatCell : SKPChatCell
{
    SKPAttributedLabel *_titleLabel;
    SKPAttributedLabel *_supplementaryTitleLabel;
    SKPAttributedLabel *_bodyLabel;
    UIView *_attachmentView;
    MKBubbleView *_attachmentContainerView;
    double _attachmentViewSize;
}

+ (struct CGSize)sizeForViewModel:(id)arg1 whenConstrainedToWidth:(double)arg2 traitCollection:(id)arg3;
@property(nonatomic) double attachmentViewSize; // @synthesize attachmentViewSize=_attachmentViewSize;
@property(readonly, nonatomic) MKBubbleView *attachmentContainerView; // @synthesize attachmentContainerView=_attachmentContainerView;
@property(retain, nonatomic) UIView *attachmentView; // @synthesize attachmentView=_attachmentView;
@property(readonly, nonatomic) SKPAttributedLabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(readonly, nonatomic) SKPAttributedLabel *supplementaryTitleLabel; // @synthesize supplementaryTitleLabel=_supplementaryTitleLabel;
@property(readonly, nonatomic) SKPAttributedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)configureWithViewModel:(id)arg1;
@property(retain, nonatomic) NSAttributedString *body;
@property(retain, nonatomic) NSAttributedString *supplementaryTitle;
@property(retain, nonatomic) NSAttributedString *title;
- (void)layoutSubviews;
@property(readonly, nonatomic) _Bool hasSupplementaryTitle;
@property(readonly, nonatomic) _Bool hasTitle;
- (id)initWithFrame:(struct CGRect)arg1;

@end

