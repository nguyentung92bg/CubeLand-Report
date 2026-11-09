/* IL2CPP: Rotatelab.Scripts.ControllerFirebase.QueuedEvent$$.ctor
void Rotatelab_Scripts_ControllerFirebase_QueuedEvent___ctor (Rotatelab_Scripts_ControllerFirebase_QueuedEvent_o* __this, System_String_o* eventName, Firebase_Analytics_Parameter_array* parameters, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ControllerFirebase.QueuedEvent$$.ctor
   void Rotatelab_Scripts_ControllerFirebase_QueuedEvent___ctor
   (Rotatelab_Scripts_ControllerFirebase_QueuedEvent_o* __this, System_String_o* eventName,
   Firebase_Analytics_Parameter_array* parameters, const MethodInfo* method); */

void Rotatelab_Scripts_ControllerFirebase_QueuedEvent___ctor_1061274
               (int param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_010713e0 + 0x1071290);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010713e4 + 0x10712a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010713e8 + 0x10712b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010713ec + 0x10712bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010713f0 + 0x10712c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010713f4 + 0x10712d4));
    *pcVar6 = '\x01';
  }
  uVar7 = 0;
  System_Object___ctor_2bb93bc(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 8),param_2);
  if (param_3 != 0) {
    piVar8 = *(int **)(_UNK_010713f8 + 0x1071310);
    iVar3 = *piVar8;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar8;
    }
    puVar4 = *(undefined4 **)(iVar3 + 0x5c);
    iVar5 = puVar4[2];
    if (iVar5 == 0) {
      if (*(int *)(iVar3 + 0x74) == 0) {
        FUN_00ec3934();
        puVar4 = *(undefined4 **)(*piVar8 + 0x5c);
      }
      uVar7 = *puVar4;
      iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010713fc + 0x1071358));
      System_Converter_object__object____ctor_1f61750
                (iVar5,uVar7,**(undefined4 **)(_UNK_01071400 + 0x1071378),0);
      piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 8);
      *piVar8 = iVar5;
      thunk_FUN_00ec5080(piVar8,iVar5);
    }
    if (*(int *)(**(int **)(_UNK_01071404 + 0x10713a0) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar7 = Rotatelab_Extensions__ConvertAll_object__object__1484fd8
                      (param_3,iVar5,**(undefined4 **)(_UNK_01071408 + 0x10713c0));
  }
  puVar4 = (undefined4 *)(param_1 + 0xc);
  *puVar4 = uVar7;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar4 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar4 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

