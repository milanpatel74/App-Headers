//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, NSUserDefaults;

@interface SCArchiveMigrationInfo : NSObject
{
    NSSet *_supportedClasses;
    NSUserDefaults *_userDefaults;
}

- (void).cxx_destruct;
- (id)_migrationKeyFromType:(id)arg1;
- (void)didSaveToFastCodingForType:(id)arg1;
- (_Bool)shouldSaveToFastCodingForType:(id)arg1;
- (_Bool)shouldLoadFromFastCodingForType:(id)arg1;
- (id)initWithUserDefaults:(id)arg1;

@end
