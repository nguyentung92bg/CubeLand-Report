/* IL2CPP: Rotatelab.Scripts.LevelManager$$GetAttemptInfo
Rotatelab_Scripts_LevelAttemptInfo_o Rotatelab_Scripts_LevelManager__GetAttemptInfo (Rotatelab_Scripts_LevelManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelManager$$GetAttemptInfo
   Rotatelab_Scripts_LevelAttemptInfo_o Rotatelab_Scripts_LevelManager__GetAttemptInfo
   (Rotatelab_Scripts_LevelManager_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_LevelManager__GetAttemptInfo_106a51c(undefined8 *param_1,int param_2)

{
  char cVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [44];
  int iStack_1c;
  
  pcVar3 = (char *)(_UNK_0107a5f4 + 0x107a538);
  iStack_1c = **(int **)(_UNK_0107a5f8 + 0x107a548);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107a5fc + 0x107a560));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107a600 + 0x107a56c));
    *pcVar3 = '\x01';
  }
  cVar1 = *(char *)(param_2 + 0x38);
  thunk_FUN_00f95db8(auStack_48,param_2 + 0x39,0x27);
  if (cVar1 == '\0') {
    Rotatelab_Scripts_LevelManager__GetAttemptInfo_1069364
              (&uStack_68,param_2,*(undefined4 *)(param_2 + 0x18));
    *param_1 = uStack_68;
    param_1[1] = uStack_60;
    param_1[2] = uStack_58;
    param_1[3] = uStack_50;
  }
  else {
    puVar2 = (undefined8 *)((uint)auStack_48 | 7);
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    *param_1 = *puVar2;
    param_1[1] = uVar4;
    param_1[2] = uVar5;
    param_1[3] = uVar6;
  }
  if (**(int **)(_UNK_0107a604 + 0x107a5e0) != iStack_1c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

