//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKPExtensionViewModel.h"

@class NSDate, NSString;

@interface SKPWPSTNCallViewModel : SKPExtensionViewModel
{
    NSString *_phoneNumberString;
    NSDate *_date;
    NSString *_contactDisplayName;
    unsigned long long _contactObjectId;
}

+ (long long)encodingVersion;
+ (id)viewModelObservedKeyPaths;
+ (id)observedKeyPaths;
+ (id)extensionViewModelClassName;
+ (Class)viewModelClassForModel:(id)arg1;
@property(nonatomic) unsigned long long contactObjectId; // @synthesize contactObjectId=_contactObjectId;
@property(retain, nonatomic) NSString *contactDisplayName; // @synthesize contactDisplayName=_contactDisplayName;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *phoneNumberString; // @synthesize phoneNumberString=_phoneNumberString;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)refreshDueToChangeInModelProperty:(id)arg1;

@end

