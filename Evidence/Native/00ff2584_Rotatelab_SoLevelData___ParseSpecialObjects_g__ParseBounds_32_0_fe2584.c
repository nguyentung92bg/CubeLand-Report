/* IL2CPP: Rotatelab.SoLevelData$$<ParseSpecialObjects>g__ParseBounds|32_0
UnityEngine_Bounds_o Rotatelab_SoLevelData___ParseSpecialObjects_g__ParseBounds_32_0 (Rotatelab_SoLevelData_o* __this, Newtonsoft_Json_Linq_JToken_o* token, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SoLevelData$$<ParseSpecialObjects>g__ParseBounds|32_0
   UnityEngine_Bounds_o Rotatelab_SoLevelData___ParseSpecialObjects_g__ParseBounds_32_0
   (Rotatelab_SoLevelData_o* __this, Newtonsoft_Json_Linq_JToken_o* token, const MethodInfo*
   method); */

void Rotatelab_SoLevelData___ParseSpecialObjects_g__ParseBounds_32_0_fe2584
               (float *param_1,undefined4 param_2,int *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  char *pcVar5;
  undefined8 uVar6;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  pcVar5 = (char *)(_UNK_00ff26b0 + 0xff25a0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff26b4 + 0xff25b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff26b8 + 0xff25c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff26bc + 0xff25cc));
    *pcVar5 = '\x01';
  }
  if (param_3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar6 = (**(code **)(*param_3 + 0x130))
                    (param_3,**(undefined4 **)(_UNK_00ff26c0 + 0xff25f0),
                     *(undefined4 *)(*param_3 + 0x134));
  Rotatelab_SoLevelData__ParseVector3_fe2d24(&fStack_24,(int)((ulonglong)uVar6 >> 0x20),(int)uVar6);
  fVar3 = fStack_1c;
  fVar2 = fStack_20;
  fVar1 = fStack_24;
  piVar4 = (int *)(**(code **)(*param_3 + 0x130))
                            (param_3,**(undefined4 **)(_UNK_00ff26c4 + 0xff2624),
                             *(undefined4 *)(*param_3 + 0x134));
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar6 = (**(code **)(*piVar4 + 0x130))
                    (piVar4,**(undefined4 **)(_UNK_00ff26c8 + 0xff2654),
                     *(undefined4 *)(*piVar4 + 0x134));
  Rotatelab_SoLevelData__ParseVector3_fe2d24(&fStack_24,(int)((ulonglong)uVar6 >> 0x20),(int)uVar6);
  *param_1 = 0.0;
  param_1[1] = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[2] = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[3] = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *param_1 = fVar1;
  param_1[1] = fVar2;
  param_1[2] = fVar3;
  param_1[5] = fStack_1c * 0.5;
  param_1[4] = fStack_20 * 0.5;
  param_1[3] = fStack_24 * 0.5;
  return;
}

