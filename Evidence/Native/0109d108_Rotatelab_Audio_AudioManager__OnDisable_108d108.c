/* IL2CPP: Rotatelab.Audio.AudioManager$$OnDisable
void Rotatelab_Audio_AudioManager__OnDisable (Rotatelab_Audio_AudioManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Audio.AudioManager$$OnDisable
   void Rotatelab_Audio_AudioManager__OnDisable (Rotatelab_Audio_AudioManager_o* __this, const
   MethodInfo* method); */

void Rotatelab_Audio_AudioManager__OnDisable_108d108(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_0109d2e8 + 0x109d11c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109d2ec + 0x109d130));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109d2f0 + 0x109d13c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109d2f4 + 0x109d148));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109d2f8 + 0x109d154));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109d2fc + 0x109d160));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109d300 + 0x109d16c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109d304 + 0x109d178));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109d308 + 0x109d184));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109d30c + 0x109d190));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_0109d310 + 0x109d1a4);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x118);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0109d314 + 0x109d1c8));
  System_Action_Int32Enum__bool____ctor_1f185a4
            (uVar4,param_1,**(undefined4 **)(_UNK_0109d318 + 0x109d1e8),0);
  uVar4 = Rotatelab_GameAction_Int32Enum__bool___op_Subtraction_23a44a8
                    (uVar7,uVar4,**(undefined4 **)(_UNK_0109d31c + 0x109d200));
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x118) = uVar4;
  thunk_FUN_00ec5080();
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x1c);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0109d320 + 0x109d230));
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_0109d324 + 0x109d250),0);
  uVar4 = Rotatelab_GameAction__op_Subtraction_fc0098(uVar7,uVar4,0);
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x1c) = uVar4;
  thunk_FUN_00ec5080();
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x124);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0109d328 + 0x109d290));
  System_Action_object____ctor_1f11414(uVar4,param_1,**(undefined4 **)(_UNK_0109d32c + 0x109d2b0),0)
  ;
  uVar4 = Rotatelab_GameAction_object___op_Subtraction_23a307c
                    (uVar7,uVar4,**(undefined4 **)(_UNK_0109d330 + 0x109d2c8));
  puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x124);
  *puVar5 = uVar4;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar5 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar5 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

