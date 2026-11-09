/* IL2CPP: Rotatelab.Audio.AudioGroup$$.ctor
void Rotatelab_Audio_AudioGroup___ctor (Rotatelab_Audio_AudioGroup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Audio.AudioGroup$$.ctor
   void Rotatelab_Audio_AudioGroup___ctor (Rotatelab_Audio_AudioGroup_o* __this, const MethodInfo*
   method); */

void Rotatelab_Audio_AudioGroup___ctor_108ce28(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar6;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar6 = (char *)(_UNK_0109ce94 + 0x109ce44);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109ce98 + 0x109ce58));
    *pcVar6 = '\x01';
  }
  iVar1 = **(int **)(_UNK_0109ce9c + 0x109ce6c);
  iVar2 = *(int *)(iVar1 + 0x5c);
  uVar4 = *(undefined4 *)(iVar2 + 8);
  uVar5 = *(undefined4 *)(iVar2 + 0xc);
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  iVar1 = *(int *)(iVar1 + 0x5c);
  uVar3 = *(undefined4 *)(iVar1 + 0xc);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar1 + 8);
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  pcVar6 = (char *)(_UNK_03615540 + 0x36154c4);
  if (*pcVar6 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03615544 + 0x36154d8),0,uVar4,uVar5,unaff_r4,unaff_r5,
                       unaff_r11,unaff_lr);
    *pcVar6 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_03615548 + 0x36154ec) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  System_Object___ctor_2bb93bc(param_1,0);
  UNRECOVERED_JUMPTABLE = *(code **)(_UNK_0361554c + 0x3615514);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_03615550 + 0x3615524);
    *(code **)(_UNK_03615554 + 0x3615534) = UNRECOVERED_JUMPTABLE;
  }
                    /* WARNING: Could not recover jumptable at 0x0361553c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}

