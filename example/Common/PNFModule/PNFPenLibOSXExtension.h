//
//  PNFPenLibExtension.h
//  PenTestOSX
//
//  Created by Luidia on 2019
//  Copyright © 2019년 Luidia. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Cocoa/Cocoa.h>
#import "PNFDefine.h"
#import "PNFPenLib.h"

@class USBManager;

@interface PNFPenLibOSXExtension : PNFPenController
{
    
}
@property(readonly) BOOL		bCalibrated;
@property(readonly) int         ProjectiveLevel;
@property(readonly) BOOL        bFixStation;

@property(readonly) int         SMPenState;
@property(readonly) int         SMPenFlag;
@property(readonly) int         SMAccelX;
@property(readonly) int         SMAccelY;
@property(readonly) int         SMAccelZ;
@property(readonly) BOOL        CriticalSection;

-(void) setProjectiveLevel:(int) nProjectiveLevel;
-(int)  getProjectiveLevel;

-(void) fixStationPosition:(int) nStationPosition;
-(void) freeStationPosition;

-(void) setDefaultModelCode:(enum ModelCode)_modelCode;

-(void) setConnectDelay:(BOOL)delayFlag;

-(void) addAffineTransform:(CGAffineTransform) trans;   //additional transform

-(BOOL) CheckValidCalibValue:(int) calNo GuideMargin:(int) nMargin CalPoint:(CGPoint) ptCal;

-(void) setPenDownThreshold:(int)value;
-(int)  nPenDownThreshold;
-(BOOL) bPenDownThreshold;

-(void) setPenDownUpThreshold:(int)threshold;
-(int)  nPenDownUpThreshold;
-(BOOL) bPenDownUpThreshold;

-(void) setPenDownUpThresholdTestMode:(int)threshold;
-(int)  nPenDownUpThresholdTestMode;
-(BOOL) bPenDownUpThresholdTestMode;

-(void) changeSensorAndIR:(unsigned short)sensorDistance irGap:(unsigned short)irGap;
-(unsigned short) sensorDistance;
-(unsigned short) irGap;

-(void) debugModeStart;
-(void) debugModeEnd;

// for filter
-(void) setFilterOnOff:(BOOL) bOnOff DispLog:(BOOL) logOnOff;

-(void) checkDICalFromUSB:(NSMutableData*)data;

// for USB Import
-(NSMutableDictionary*) USBManager_Dic;
-(NSMutableArray*) USBManager_FolderList;
-(NSMutableArray*) USBManager_FileList;
-(NSString*) USBManager_RootPath;
-(void) USBManager_setBookmarkData:(NSData*)bookmarkData;
-(NSString*) USBManager_BookmarkPath;
-(void) checkDiData;
-(BOOL) isCheckDiData;

//dhlee add - DI =============================//
@property(readonly) int di_paper_size;
@property(readonly) int di_figure_count;
@property(readonly) NSMutableArray* di_debug_str;
@property(readonly) int di_freespace;
@property(readonly) BOOL di_bRun;
@property(readonly) BOOL di_bTemporary_file;
@property(readonly) NSData *di_file_data;
@property(readonly) NSMutableArray *di_file_data_temp;
@property(readonly) NSMutableArray *di_file_data_mg;
@property(readonly) NSMutableArray *di_file_data_mg_paper;
@property(readonly) NSMutableArray *di_savefilename;
@property(readonly) int di_tempfile_size;

-(int) getFolderCount;
-(int) getDIAllFileCount;
-(int) getFileCount:(int)index;
-(void) setFolderIndex:(int) index;
-(void) setFileIndex:(int) index;
-(NSMutableArray*) getDIFolderName;
-(NSMutableArray*) getDIFileName:(int)folder;
-(NSMutableArray*) getDISavefileName;
-(NSMutableArray*) getDISaveAllfileName;
-(void) setChoiceFolder:(int)index setState:(int)state;
-(void) setChoiceFile:(int)index fileDel:(BOOL)bkey;
-(int) getDIState;
-(int) getDIDownFileSize;
-(void) setDIState:(int)state;
-(NSData *) getDIShowData;
-(NSMutableArray*) getDIAllfileData;

-(NSMutableData*) getDIDebugData:(BOOL)bList;

-(void) convertData:(NSData*)data c:(BOOL)b;
-(int) getDIFileSize;
-(void)releaseTempData;
-(void)checkDIPaperSize:(NSData *)data;
-(void) setNonSandbox;
//dhlee end - DI =============================//


@end
