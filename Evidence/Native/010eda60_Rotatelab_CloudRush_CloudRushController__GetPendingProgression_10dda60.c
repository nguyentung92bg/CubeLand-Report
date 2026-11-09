/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$GetPendingProgression
Rotatelab_CloudRush_CloudRushController_PendingProgression_o Rotatelab_CloudRush_CloudRushController__GetPendingProgression (Rotatelab_CloudRush_CloudRushController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$GetPendingProgression
   Rotatelab_CloudRush_CloudRushController_PendingProgression_o
   Rotatelab_CloudRush_CloudRushController__GetPendingProgression
   (Rotatelab_CloudRush_CloudRushController_o* __this, const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushController__GetPendingProgression_10dda60(undefined8 *param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  pcVar2 = (char *)(_UNK_010edae8 + 0x10eda78);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010edaec + 0x10eda8c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010edaf0 + 0x10eda98));
    *pcVar2 = '\x01';
  }
  uVar1 = Rotatelab_Save_SaveManager__GetString_10790b0
                    (**(undefined4 **)(_UNK_010edaf8 + 0x10edabc),
                     **(undefined4 **)(_UNK_010edaf4 + 0x10edab0),0);
  Rotatelab_CloudRush_CloudRushController_PendingProgression__Parse_10ddafc(&uStack_28,uVar1);
  *param_1 = uStack_28;
  param_1[1] = uStack_20;
  *(undefined4 *)(param_1 + 2) = uStack_18;
  return;
}

