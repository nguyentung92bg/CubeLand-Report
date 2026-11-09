/* IL2CPP: Rotatelab.PreBoosters.PreBooster$$OnEnable
void Rotatelab_PreBoosters_PreBooster__OnEnable (Rotatelab_PreBoosters_PreBooster_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.PreBoosters.PreBooster$$OnEnable
   void Rotatelab_PreBoosters_PreBooster__OnEnable (Rotatelab_PreBoosters_PreBooster_o* __this,
   const MethodInfo* method); */

void Rotatelab_PreBoosters_PreBooster__OnEnable_10ec088(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_010fc1dc + 0x10fc09c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fc1e0 + 0x10fc0b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fc1e4 + 0x10fc0bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fc1e8 + 0x10fc0c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fc1ec + 0x10fc0d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fc1f0 + 0x10fc0e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fc1f4 + 0x10fc0ec));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_010fc1f8 + 0x10fc100);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xb0);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010fc1fc + 0x10fc124));
  System_Action_Int32Enum____ctor_1f10670
            (uVar4,param_1,**(undefined4 **)(_UNK_010fc200 + 0x10fc144),0);
  uVar4 = Rotatelab_GameAction_Int32Enum___op_Addition_23a2cf8
                    (uVar7,uVar4,**(undefined4 **)(_UNK_010fc204 + 0x10fc15c));
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xb0) = uVar4;
  thunk_FUN_00ec5080();
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xb8);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010fc208 + 0x10fc18c));
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_010fc20c + 0x10fc1ac),0);
  uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar7,uVar4,0);
  puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xb8);
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

