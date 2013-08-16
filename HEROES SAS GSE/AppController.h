//
//  AppController.h
//  HEROES SAS GSE
//
//  Created by Steven Christe on 10/22/12.
//  Copyright (c) 2012 GSFC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CameraView.h"

#import "DataPacket.h"
#import "ConsoleWindowController.h"
#import "CommanderWindowController.h"
#import "PlotWindowController.h"
#import "RASCameraViewWindow.h"
#import "AutoFlipSwitch.h"

@interface AppController : NSWindowController

@property (weak) IBOutlet NSTextField *SAS1FrameNumberLabel;
@property (weak) IBOutlet NSTextField *SAS2FrameNumberLabel;
@property (weak) IBOutlet NSTextField *SAS1FrameTimeLabel;
@property (weak) IBOutlet NSTextField *SAS2FrameTimeLabel;
@property (weak) IBOutlet NSTextField *SAS2CPUTemperatureLabel;
@property (weak) IBOutlet NSTextField *SAS1CPUTemperatureLabel;
@property (weak) IBOutlet NSTextField *PYASFCameraTemperatureLabel;
@property (weak) IBOutlet NSTextField *PYASRCameraTemperatureLabel;
@property (weak) IBOutlet NSTextField *RASCameraTemperatureLabel;
@property (weak) IBOutlet NSTextField *SAS1CmdCountTextField;
@property (weak) IBOutlet NSTextField *SAS1CmdKeyTextField;
@property (weak) IBOutlet NSTextField *SAS2CmdCountTextField;
@property (weak) IBOutlet NSTextField *SAS2CmdKeyTextField;
@property (nonatomic, strong) IBOutlet CameraView *PYASRcameraView;
@property (nonatomic, strong) IBOutlet CameraView *PYASFcameraView;
@property (weak) IBOutlet NSTextField *PYASFCTLCmdEchoTextField;
@property (weak) IBOutlet NSTextField *PYASRCTLCmdEchoTextField;
@property (weak) IBOutlet NSTextField *PYASFImageMaxTextField;
@property (weak) IBOutlet NSTextField *PYASRImageMaxTextField;
@property (weak) IBOutlet NSTextField *RASImageMaxTextField;

@property (weak) IBOutlet NSTextField *PYASFCTLSigmaTextField;
@property (weak) IBOutlet NSForm *PYASFTemperaturesForm;
@property (weak) IBOutlet NSForm *PYASRTemperaturesForm;
@property (weak) IBOutlet NSMenu *TimeProfileMenu;
@property (unsafe_unretained) IBOutlet NSWindow *MainWindow;
@property (weak) IBOutlet AutoFlipSwitch *SAS1AutoFlipSwitch;

@property (weak) IBOutlet AutoFlipSwitch *PYASFAutoFlipSwitch;
@property (weak) IBOutlet AutoFlipSwitch *PYASRAutoFlipSwitch;
@property (weak) IBOutlet AutoFlipSwitch *RASAutoFlipSwitch;
@property (weak) IBOutlet AutoFlipSwitch *SAS2AutoFlipSwitch;


@property (weak) IBOutlet NSTextField *PYASRAspectErrorCodeTextField;
@property (weak) IBOutlet NSTextField *PYASFAspectErrorCodeTextField;
@property (weak) IBOutlet NSLevelIndicator *PYASRisTracking_indicator;
@property (weak) IBOutlet NSLevelIndicator *PYASFisTracking_indicator;
@property (weak) IBOutlet NSLevelIndicator *PYASRFoundSun_indicator;
@property (weak) IBOutlet NSLevelIndicator *PYASFFoundSun_indicator;
@property (weak) IBOutlet NSLevelIndicator *PYASRProvidingCTL_indicator;
@property (weak) IBOutlet NSLevelIndicator *PYASFProvidingCTL_indicator;
@property (weak) IBOutlet NSForm *PYASRVoltagesForm;
@property (weak) IBOutlet NSForm *PYASFVoltagesForm;
@property (weak) IBOutlet NSLevelIndicator *SAS1ClockSync_indicator;
@property (weak) IBOutlet NSLevelIndicator *SAS2ClockSync_indicator;

@property (nonatomic, strong) RASCameraViewWindow *rasCameraViewWindow;
@property (nonatomic, strong) NSFileHandle *SAS1telemetrySaveFile;
@property (nonatomic, strong) NSFileHandle *SAS2telemetrySaveFile;
@property (nonatomic, strong) NSDictionary *timeSeriesCollection;

@property (nonatomic, readonly) CommanderWindowController *Commander_window;
@property (nonatomic, readonly) ConsoleWindowController *Console_window;
@property (nonatomic, strong) NSMutableDictionary *PlotWindows;

- (IBAction)RunTest:(NSButton *)sender;
- (IBAction)PYASsaveImage_ButtonAction:(NSButton *)sender;
- (IBAction)OpenWindow_WindowMenuItemAction:(NSMenuItem *)sender;
- (IBAction)ClearPYASBkgImage:(NSButton *)sender;

- (void)postToLogWindow: (NSString *)message;

@end
