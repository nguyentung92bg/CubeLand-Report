/* IL2CPP: Rotatelab.Scripts.ObjectShadowController$$OnEnable
void Rotatelab_Scripts_ObjectShadowController__OnEnable (Rotatelab_Scripts_ObjectShadowController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ObjectShadowController$$OnEnable
   void Rotatelab_Scripts_ObjectShadowController__OnEnable
   (Rotatelab_Scripts_ObjectShadowController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_ObjectShadowController__OnEnable_102fee8(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_0104003c + 0x103fefc);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01040040 + 0x103ff10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01040044 + 0x103ff1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01040048 + 0x103ff28));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104004c + 0x103ff34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01040050 + 0x103ff40));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01040054 + 0x103ff4c));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_01040058 + 0x103ff60);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x124);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0104005c + 0x103ff84));
  System_Action_object____ctor_1f11414(uVar4,param_1,**(undefined4 **)(_UNK_01040060 + 0x103ffa4),0)
  ;
  uVar4 = Rotatelab_GameAction_object___op_Addition_23a2f60
                    (uVar7,uVar4,**(undefined4 **)(_UNK_01040064 + 0x103ffbc));
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x124) = uVar4;
  thunk_FUN_00ec5080();
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x74);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01040068 + 0x103ffec));
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_0104006c + 0x104000c),0);
  uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar7,uVar4,0);
  puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x74);
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

