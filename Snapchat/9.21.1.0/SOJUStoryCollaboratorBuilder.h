//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SOJUStoryCollaboratorBuilder : NSObject
{
    NSString *_userId;
    NSString *_username;
    NSString *_displayName;
}

+ (id)withJUStoryCollaborator:(id)arg1;
- (void).cxx_destruct;
- (id)setDisplayName:(id)arg1;
- (id)setUsername:(id)arg1;
- (id)setUserId:(id)arg1;
- (id)build;

@end
