//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MKReactiveCollectionReusableView.h"

@class SKPChatMessageDeliverySupplementaryViewStylesheet, UILabel;

@interface SKPChatMessageDeliverySupplementaryView : MKReactiveCollectionReusableView
{
    long long _deliveryStatus;
    UILabel *_textLabel;
    UILabel *_iconLabel;
    SKPChatMessageDeliverySupplementaryViewStylesheet *_stylesheet;
}

@property(readonly, nonatomic) SKPChatMessageDeliverySupplementaryViewStylesheet *stylesheet; // @synthesize stylesheet=_stylesheet;
@property(retain, nonatomic) UILabel *iconLabel; // @synthesize iconLabel=_iconLabel;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) long long deliveryStatus; // @synthesize deliveryStatus=_deliveryStatus;
- (void).cxx_destruct;
- (_Bool)accessibilityElementsHidden;
- (_Bool)isAccessibilityElement;
- (id)initWithFrame:(struct CGRect)arg1;

@end

