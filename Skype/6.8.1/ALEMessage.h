//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALEObjectInterface.h"

@interface ALEMessage : ALEObjectInterface
{
    _Bool ownMessageObj;
    struct MessageWrapper *messageWrapper;
}

- (void)RemoveAnnotation:(unsigned int)arg1;
- (_Bool)GetVoiceMessage:(id)arg1;
- (_Bool)GetVideoMessage:(id)arg1;
- (_Bool)GetTransfers:(id *)arg1;
- (_Bool)GetSMS:(id)arg1;
- (int)GetPermissions;
- (void)GetOwnAnnotations:(int)arg1 andMessageannotationobjectidlist:(id *)arg2;
- (unsigned int)GetOtherLiveMessage;
- (_Bool)GetMediaDocument:(id)arg1;
- (_Bool)GetLocation:(int *)arg1 andLongitude:(int *)arg2 andAltitude:(int *)arg3 andHorizontalaccuracy:(int *)arg4 andVerticalaccuracy:(int *)arg5 andSpeed:(int *)arg6 andCourse:(int *)arg7 andTimestamp:(int *)arg8 andAddress:(id *)arg9 andPointofinterest:(id *)arg10;
- (_Bool)GetContacts:(id *)arg1;
- (void)GetAnnotations:(int)arg1 andAnnotationobjectidlist:(id *)arg2;
- (_Bool)Edit:(id)arg1 andIsxml:(_Bool)arg2 andUndo:(_Bool)arg3 andLegacyprefix:(id)arg4;
- (_Bool)EditWithAnnotation:(id)arg1 andAnnotationtype:(int)arg2 andAnnotationkey:(id)arg3 andAnnotationvalue:(id)arg4 andAnnotationid:(unsigned int *)arg5 andLegacyprefix:(id)arg6 andIsxml:(_Bool)arg7;
- (_Bool)DeleteLocally;
- (void)CountAnnotations:(int)arg1 andKeys:(id *)arg2 andCounts:(id *)arg3;
- (_Bool)CanEdit;
- (_Bool)CanAnnotate;
- (unsigned int)AddAnnotation:(int)arg1 andKey:(id)arg2 andValue:(id)arg3;
- (void *)skylibObj;
- (void)dealloc;
- (void)createSkylibObject;
- (id)initWithoutSkylibObject;
- (id)init;

@end

