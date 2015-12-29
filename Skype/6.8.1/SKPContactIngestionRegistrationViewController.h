//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKPViewController.h"

#import "SKPWelcomeExperienceChildControllerProtocol.h"

@class NSString, SKPContactIngestionRegistrationView;

@interface SKPContactIngestionRegistrationViewController : SKPViewController <SKPWelcomeExperienceChildControllerProtocol>
{
    id <SKPWelcomeExperienceChildControllerDelegate> delegate;
    CDUnknownBlockType _allowIngestionBlock;
    CDUnknownBlockType _cancelIngestionBlock;
    unsigned long long _eventOrigin;
}

+ (id)addFriendsOnSkypePNVerifiedController;
+ (id)addFriendsOnSkypeController;
@property(nonatomic) unsigned long long eventOrigin; // @synthesize eventOrigin=_eventOrigin;
@property(copy, nonatomic) CDUnknownBlockType cancelIngestionBlock; // @synthesize cancelIngestionBlock=_cancelIngestionBlock;
@property(copy, nonatomic) CDUnknownBlockType allowIngestionBlock; // @synthesize allowIngestionBlock=_allowIngestionBlock;
@property(nonatomic) __weak id <SKPWelcomeExperienceChildControllerDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)preferredStatusBarStyle;
- (void)loadView;
@property(readonly, nonatomic) SKPContactIngestionRegistrationView *registrationView;
- (id)initWithTitle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

