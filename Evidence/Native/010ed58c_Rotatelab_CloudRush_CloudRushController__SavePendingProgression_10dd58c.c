/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$SavePendingProgression
void Rotatelab_CloudRush_CloudRushController__SavePendingProgression (Rotatelab_CloudRush_CloudRushController_o* __this, int32_t fromLevel, int32_t fromPlayerCount, int32_t toLevel, int32_t toPlayerCount, int32_t droppingPlayerCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$SavePendingProgression
   void Rotatelab_CloudRush_CloudRushController__SavePendingProgression
   (Rotatelab_CloudRush_CloudRushController_o* __this, int32_t fromLevel, int32_t fromPlayerCount,
   int32_t toLevel, int32_t toPlayerCount, int32_t droppingPlayerCount, const MethodInfo* method);
    */

void Rotatelab_CloudRush_CloudRushController__SavePendingProgression_10dd58c(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_010ed618 + 0x10ed5ac);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ed61c + 0x10ed5c8));
    *pcVar4 = '\x01';
  }
  uVar1 = Rotatelab_CloudRush_CloudRushController_PendingProgression__ToString_10dd638();
  Rotatelab_Save_SaveManager__SetString_10791b8
            (**(undefined4 **)(_UNK_010ed620 + 0x10ed604),uVar1,0);
  pcVar4 = (char *)(_UNK_010ec180 + 0x10ec148);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ec184 + 0x10ec15c));
    *pcVar4 = '\x01';
  }
  iVar2 = UnityEngine_PlayerPrefs__TrySetInt_35f6358
                    (**(undefined4 **)(_UNK_010ec188 + 0x10ec178),1,0);
  if (iVar2 != 0) {
    return;
  }
  thunk_FUN_00f23fd0(*(undefined4 *)(iRam03606b64 + 0x3606b28));
  uVar1 = thunk_FUN_00f00cdc();
  uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03606b68 + 0x3606b3c));
  UnityEngine_PlayerPrefsException___ctor_35f62e8(uVar1,uVar3);
  uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03606b6c + 0x3606b54));
  FUN_01f4fe28(uVar1,uVar3);
                    /* WARNING: Subroutine does not return */
  FUN_01f4fe2c();
}

