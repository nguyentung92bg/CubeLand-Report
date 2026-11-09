/* IL2CPP: Rotatelab.Audio.AudioManager$$OnEnable
void Rotatelab_Audio_AudioManager__OnEnable (Rotatelab_Audio_AudioManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Audio.AudioManager$$OnEnable
   void Rotatelab_Audio_AudioManager__OnEnable (Rotatelab_Audio_AudioManager_o* __this, const
   MethodInfo* method); */

void Rotatelab_Audio_AudioManager__OnEnable_108cedc(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_0109d0bc + 0x109cef0);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109d0c0 + 0x109cf04));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109d0c4 + 0x109cf10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109d0c8 + 0x109cf1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109d0cc + 0x109cf28));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109d0d0 + 0x109cf34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109d0d4 + 0x109cf40));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109d0d8 + 0x109cf4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109d0dc + 0x109cf58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109d0e0 + 0x109cf64));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_0109d0e4 + 0x109cf78);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x118);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0109d0e8 + 0x109cf9c));
  System_Action_Int32Enum__bool____ctor_1f185a4
            (uVar4,param_1,**(undefined4 **)(_UNK_0109d0ec + 0x109cfbc),0);
  uVar4 = Rotatelab_GameAction_Int32Enum__bool___op_Addition_23a438c
                    (uVar7,uVar4,**(undefined4 **)(_UNK_0109d0f0 + 0x109cfd4));
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x118) = uVar4;
  thunk_FUN_00ec5080();
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x1c);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0109d0f4 + 0x109d004));
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_0109d0f8 + 0x109d024),0);
  uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar7,uVar4,0);
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x1c) = uVar4;
  thunk_FUN_00ec5080();
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x124);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0109d0fc + 0x109d064));
  System_Action_object____ctor_1f11414(uVar4,param_1,**(undefined4 **)(_UNK_0109d100 + 0x109d084),0)
  ;
  uVar4 = Rotatelab_GameAction_object___op_Addition_23a2f60
                    (uVar7,uVar4,**(undefined4 **)(_UNK_0109d104 + 0x109d09c));
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

